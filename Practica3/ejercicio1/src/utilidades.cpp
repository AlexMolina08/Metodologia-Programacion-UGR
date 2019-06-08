/* 	
	*Nombre: Alejandro Molina Criado
	*Grupo: 1ºE - 2
	*Fecha: 24/04/19
*/

#include "utilidades.h"
#include <iostream>

using namespace std;

void imprimir(int *secuencia, int util){
	for (int i = 0 ; i<util; i++){
		if(i!=0) cout<<",";
		cout<<*secuencia++;	
	}
	cout<<endl;

}

void imprimir(int **secuencia, int util){

	for(int i = 0 ; i < util ; i++){
		if(i!=0) cout<<",";
		cout<<**(secuencia+i);
	}
	cout<<endl;
}

//---------------//

void intercambiar(int *&v1 , int *&v2){
	int *aux = v1;
	v1 = v2;
	v2 = aux;
} 

void ordenarPunteros(int *array, int **parray, int util){
	//Primero hacemos que cada puntero del parray apunte a un elemento del array (de forma "vertical")
	for(int i = 0 ; i<util ; i++){
		*(parray+i) = &*(array+i);	
	}
	for(int m = 0 ; m<util-1 ; ++m){
		int minimo = m;
		for (int j = m+1 ; j<util ; j++){
			if(**(parray+minimo)>**(parray+j))	
				minimo=j;
		}
		intercambiar(parray[m],parray[minimo]);
	}	
}


