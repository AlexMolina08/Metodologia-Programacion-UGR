/*
	@file utilidades.cpp
	@brief Implementación de las funciones de utilidades
	@author Alejandro Molina Criado
	@date 03/19
*/

#include "utilidades.h"
#include <iostream>
using namespace std;

void imprimirArray(const int v[], int tam){
	for(int j = 0 ; j<tam ; j++){
		cout<<v[j];
		if(j<tam-1)
			cout<<" ";
	}
	cout<<endl;
}

void copiaElementos(const int origen[] , int destino[] , int inicio , int fin){
	int c = 0;
	for (int i = inicio ; i<=fin ; i++){
		destino[c] = origen[i];
		c++;
	}

}

/*
	*Devuelve la posicion final en el vector de la secuencia creciente dada una posicion inicial
	*el tamaño de la secuencia se pasa por referencia
*/

int obtenerSecuenciaCreciente(const int v[] , int tam , int pos_in , int &tam_seq){
	
	tam_seq = 1;
	int i = pos_in;

	while(v[i] < v[i+1] && i < tam-1){
		tam_seq++;
		i++;	
	}

	return i;

}



void obtenerMayorSecuenciaMonotonaCreciente(const int v[] , int tam , int sc[] , int &tam_seq){
	int siguiente = 0 , inicio = siguiente;
	int ultimo = siguiente, fin;
	int aux = 0;

	while(siguiente<tam){
		ultimo = obtenerSecuenciaCreciente(v,tam,siguiente,tam_seq);
		
		if(tam_seq > aux){
			aux = tam_seq;
			inicio = siguiente;
			siguiente = ultimo+1;
			fin = ultimo;
		}else{
			siguiente = ultimo +1;
		}
		
	}

	tam_seq = aux;
	copiaElementos(v,sc,inicio,fin);
}








