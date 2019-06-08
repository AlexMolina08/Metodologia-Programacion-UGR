/*
	@file utilidades.cpp
	@brief Implementación de las funciones de utilidades
	@author Alejandro Molina Criado
	@date 03/19
*/

#include "utilidades.h"

bool insertarCadena(const char v[], char s[] , int pos, char resultado[]){
	int cV = 0 , cR = 0 ;
	bool llegada = false , pasado = false;
	char aux;
	while (!pasado){

		if(v[cV] == '\0') pasado = true;

		if (cV == pos){
			llegada = true;
			aux = v[cV];
			for(int i = 0 ; s[i]!='\0'; i++ , cR++){
 				resultado[cR] = s[i];
			}

			resultado[cR++] = aux;
			
		}else{

			resultado[cR] = v[cV];
			
			cR++;
		}

		cV++;	
	
	}
	
	resultado[cR] = '\0';

	if(cV <= pos)
		return false;
	
	return true;
	

}
