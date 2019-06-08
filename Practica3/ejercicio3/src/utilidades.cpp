/*
	*Nombre:Alejandro Molina Criado
	*Fecha:25/04/19
	*Curso: 1ºE-2
*/

#include "utilidades.h"

#include <iostream>
using namespace std;

void imprimirArray(double *v , int util){
	for(int i = 0 ; i < util ; i++){
		if(i!=0)
			cout<<",";
		cout<<*(v+i);
	}
	cout<<endl;
}

int mezclarUnico(double *array1 , int util1 , double *array2 , int util2 , double *array3){

	int c1 = 0 , c2 = 0 , c3 = 0 , c;
	int *p , utilp;

	while(c1<util1 && c2<util2){
		if(*(array1+c1)<*(array2+c2)){
			*(array3+c3) = *(array1+c1);
			c1++;	
		}else if(*(array1+c1)>*(array2+c2)){
			*(array3+c3) = *(array2+c2);
			c2++;
		}else{
			*(array3+c3) = *(array1+c1);
			c1++;
			c2++;
		}
		c3++;
	}
	
	while(c1<util1 || c2<util2){
		if(c1<util1){
			*(array3+c3) = *(array1+c1);
			c1++;c3++;
		}else{
			*(array3+c3) = *(array2+c2);
			c2++;c3++;
		}
	}

	return c3;
}
