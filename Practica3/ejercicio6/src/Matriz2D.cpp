#include "Matriz2D.h"
#include <iostream>

using namespace std;

Matriz2D::Matriz2D(int numeroFilas , int numeroColumnas){

	this->numeroFilas = numeroFilas;
	this->numeroColumnas = numeroColumnas;

	matriz = new int*[numeroFilas];

	for(int i = 0 ; i<numeroFilas ; i++){
		matriz[i] = new int[numeroColumnas];
	}

}

Matriz2D::Matriz2D(const Matriz2D &objeto){

	matriz = new int*[objeto.numeroFilas];
	
	for(int i = 0 ; i<objeto.numeroFilas;i++){
		*matriz[i] = *(objeto.matriz[i]);
	}

}

Matriz2D::~Matriz2D(){
	
	for(int i = 0 ; i < this->numeroFilas ; i++){
		
		delete[] matriz[i];

	}

	delete matriz;

}

void Matriz2D::mostrarPantalla(){
	for(int f = 0 ; f<this->numeroFilas ; f++){
		for(int c=0;c<this->numeroColumnas ;c++){
			cout<<matriz[f][c]<<" ";
		}
		cout<<endl;	
	}

}

bool Matriz2D::asignarValor(int fila , int columna , int valor){

	if(fila > numeroFilas-1 || columna > numeroColumnas -1 ) return false;

	matriz[fila][columna] = valor;	

	return true;

}




Matriz2D* Matriz2D::copiarMatriz(){
	Matriz2D* resultado = new Matriz2D(this->numeroFilas , this->numeroColumnas);

	for(int f=0; f<resultado->numeroFilas ; f++){
		for(int c = 0 ; c<resultado->numeroColumnas ; c++)
			resultado->matriz[f][c] = this->matriz[f][c];
	}

	return resultado;
}


Matriz2D* Matriz2D::extrarSubmatriz(int filaIni, int colIni, int filaFin, int colFin){

	int nFilas = (filaFin - filaIni) + 1 , nColumnas = (colFin - colIni) + 1;
	Matriz2D* subMatriz = new Matriz2D(nFilas , nColumnas);

	if(nFilas > this->numeroFilas || nColumnas > this->numeroColumnas) return this; //Si es una Matriz mayor a la original, devolvemos la original.
	
	int i = filaIni;

	for(int f = 0 ; f<nFilas ; f++ , i++){

		for(int c = 0 , j = colIni; c<nColumnas ; c++ , j++){
			subMatriz->matriz[f][c] = matriz[i][j];
		}

	}

	return subMatriz;
}



int Matriz2D::getNFilas(){
	return this->numeroFilas;
}
int Matriz2D::getNColumnas(){
	return this->numeroColumnas;
}	

void Matriz2D::eliminarFila(int fila){
	int tam = this->numeroFilas - 1;
	int** resultado = new int*[tam];
	
	for(int i = 0 ; i < tam ; i++){
		resultado[i] = new int[numeroColumnas];
	}

	for(int j=0 ; j<fila ; j++){
		for(int k = 0 ; k<numeroColumnas ; k++)
			resultado[j][k] = matriz[j][k];
	}

	for(int j=fila+1; j<tam ; j++){
		for(int k = 0; k<numeroColumnas ; k++)
			resultado[j-1][k] = matriz[j][k];
	}


	for(int i = 0 ; i < numeroFilas ; i++)
		delete[] matriz[i];
	
	delete[] matriz;

	matriz = resultado;

	numeroColumnas-=1;

}






