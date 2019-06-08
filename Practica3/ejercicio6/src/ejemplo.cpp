#include "Matriz2D.h"
#include <iostream>
using namespace std;


int main(){
	
	Matriz2D matriz(4,4);
	int c = 1;
	for(int i = 0 ; i < matriz.getNFilas() ; i++){
		for(int j = 0 ; j<matriz.getNColumnas() ; j++)
			matriz.asignarValor(i,j,c++);
	}
	matriz.mostrarPantalla();

	cout<<"--QUITAMOS ULTIMO ELEMENTO--\n";
	matriz.eliminarFila(3);

	return 0;
}
