#include "utilidades.h"
#include <iostream>
using namespace std;

int main(){

	const int DIM = 5;
	int array[DIM] = {3,1,2,5,4} , arrayOrdenado[DIM];
	int **parray = new int*[DIM];

	//ordenarPunteros(array,parray,DIM);

	//imprimir(parray,DIM);

	int aux;
	
	ordenarPunteros(array,parray,DIM);

	imprimir(parray,DIM);
	imprimir(array,DIM);

	return 0;

}
