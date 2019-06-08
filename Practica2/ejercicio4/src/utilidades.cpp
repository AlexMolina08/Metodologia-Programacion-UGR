/*
	@file utilidades.cpp
	@brief Implementación de las funciones de utilidades
	@author Alejandro Molina Criado
	@date 03/19
*/

#include "utilidades.h"


int localizarSubcadena(char c1[], char c2[]){
	bool esIgual;
	int pos;

	if(c1[0]=='\0' && c2[0] == '\0') return 1;

	for(int i = 0 , j = 0; c1[i]!='\0' && c2[j] != '\0' ; i++){
		
		if(c1[i] == c2[j]){
			if(j==0) pos=i;
			esIgual = true;
			j++;		
		}else{
			esIgual=false;
			j=0;		
		}

	}

	if(esIgual)
		return pos;
	else
		return -1;


	return 0;
}
