/*
	@file utilidades.cpp
	@brief Implementación de las funciones de utilidades
	@author Alejandro Molina Criado
	@date 03/19
*/
#include "utilidades.h"
#include <iostream>
using namespace std;
/*
	*@param Combina el contenido de 2 arrays en uno con valores ordenados y no repetidos
	*@return numero de valores del array resultante
*/

void imprimirArray(double v[] , int tam){
	for (int i = 0 ; i<tam ; i++)
		std::cout<<v[i]<<' ';
	std::cout<<'\n';
}


int mezclar(double v1[] , int tam1 ,  double v2[] , int tam2 , double resultado[]){
	int j = 0 , c = 0;
	
	for (int i = 0; i<tam1 ; i++){
		while( v1[i] > v2[j] && j < tam2 ){
			resultado[c] = v2[j];
			j++;
			c++;	
		} 
		
		if (v1[i] == v2[j] and j != tam2)
			j++;
		
		resultado[c] = v1[i];
		c++;		
	}

	while(j <= tam2-1){
		resultado[c] = v2[j];
		j++;
		c++;
	}


	return c;
}	
