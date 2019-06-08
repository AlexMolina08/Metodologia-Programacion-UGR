/*
	@file utilidades.cpp
	@brief Implementación de las funciones de utilidades
	@author Alejandro Molina Criado
	@date 03/19
*/

#include "utilidades.h"
#include <iostream>
using namespace std;


void mostrarContenido(Valor v[] , int tam){
	for(int i = 0 ; i < tam ; i++){
		v[i].mostrar();
		if(i<tam-1) cout<<" --- ";	
	}
	cout<<endl;
}

int combinarSuma(const Valor a1[] , int tam1 , const Valor a2[] , int tam2 , Valor r[]){
	int util_r = 0;
	bool encontrado;
	/*Copiamos los elementos de a1 en r y vemos si hay elementos en la misma posición de la matriz*/
	r[util_r] = a1[0]; 
	util_r++;
	for(int i=1 ; i<tam1 ; i++){
		encontrado=false;
		for(int k= 0; k < util_r ; k++){
			if(a1[i].fila == r[k].fila && a1[i].columna == r[k].columna){
				r[k].valor+=a1[i].valor;			
				encontrado=true;
			}
		}
		if(!encontrado){
			r[util_r] = a1[i];
			util_r++;
		}
	}

	for (int j = 0 ; j<tam2 ; j++){
		encontrado = false;
		
		for (int x = 0 ; x<util_r && !encontrado; x++){
			if(a2[j].fila == r[x].fila && a2[j].columna == r[x].columna){
				r[x].valor += a2[j].valor;
				encontrado=true;			
			}
		}
		
		if(!encontrado){
			r[util_r] = a2[j];
			util_r++;		
		}	
	}

	return util_r;

}
