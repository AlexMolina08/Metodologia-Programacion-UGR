#include "Barquitos.h"
#include <iostream>
#include <cstdlib>
using namespace std;


Barquitos::Barquitos(): nFilas(0) , nColumnas(0) , matriz(0){
}

Barquitos::Barquitos(int nFilas , int nColumnas){

	this->nFilas = nFilas;
	this->nColumnas = nColumnas;
	
	reservaMemoria(nFilas , nColumnas);

}

Barquitos::Barquitos(const Barquitos& b){

	reservaMemoria(b.nFilas , b.nColumnas);
	copiarDatos(b);


}

Barquitos::~Barquitos(){
	liberarMemoria();
}


void Barquitos::reservaMemoria(int nFil , int nCol){

	matriz = 0 ; //hacemos que la matriz no apunte a nada

	if(nFil > 0 && nCol > 0){
		//aquí hago la reserva del vector de punteros
		matriz = new tipoBase*[nFil];		
		//Ahora reservo memoria para cada fila (un array de enteros)
		for(int i = 0 ; i < nFil ; i++){
			matriz[i] = new tipoBase[nCol];
			//Inicializamos todos los valores de las filas a 9 (agua)
			for(int j = 0 ; j < nCol ; j++)
				matriz[i][j] = 9;
		}
	}

}

void Barquitos::liberarMemoria(){

	if(matriz){
	
		//Primero liberamos todos los datos del array de punteros
		for(int i = 0 ; i < nFilas ; i++)
			delete[] matriz[i];
		
		//Eliminamos el Array de punteros
		delete[] matriz;
	
	}

}

void Barquitos::copiarDatos(const Barquitos& b){

	nFilas = b.nFilas;
	nColumnas = b.nColumnas;

	for(int i = 0 ; i < nFilas ; i++){

		for(int j = 0 ; j<nColumnas ; j++)
			matriz[i][j] = b.matriz[i][j];

	}

}


bool Barquitos::compruebaUbi(int f , int c , int barco , char o){
	bool resultado = false;

	if(f<nFilas && c<nColumnas){

		o = tolower(o); //Convertimos el caracter a minúscula para evitar errores.

		//Primero vemos si el barco sobrepasa los límites del tablero (Tanto en el caso horizontal como vertical)
		
		if(o == 'h'){
			cout<<nColumnas - c<<endl;
			nColumnas - c >= barco ? resultado = true : resultado = false;
		}else if (o == 'v'){
			cout<<nFilas - f<<endl;
			nFilas - f >= barco ? resultado = true : resultado = false;
		}

		//Ahora comprobamos si hay barcos colocados en esa zona del tablero
		int contador = 0;
		int pos;
		if(o == 'h'){
			pos = c;
			while(resultado && contador < barco){
				if(matriz[f][pos] != 9) resultado = false;
				contador++; pos++;
			}	

		}else if (o == 'v'){
			pos = f;
			while(resultado && contador < barco){
				if(matriz[pos][c] != 9) resultado = false;
				contador++; pos++;
			}
		}
	}

	return resultado;
}

void Barquitos::colocaBarco(int f , int c , int barco , char o){
	o = tolower(o);
	if(compruebaUbi(f,c,barco,o)){
		int pos;
		if(o=='h'){
			pos = c;
			for(int i = 0 ; i < barco ; i++,pos++)		
				matriz[f][pos] = barco;

		}else if (o=='v'){
			pos = f;
			for(int i = 0 ; i < barco ; i++,pos++){
				matriz[pos][c] = barco;
			}
		}

	}else{
		cout<<"\n**ERROR: No es posible colocar el barco en esa posición**\n";
	}

}

void Barquitos::muestraTablero(){
	
	cout<<"\n--TABLERO--\n";
	for(int i = 0 ; i < nFilas ; i++){

		for(int j = 0 ; j<nColumnas ; j++)
			cout<<matriz[i][j]<<" ";

		cout<<endl;
	}

}

int Barquitos::getNFilas(){
	
	return nFilas;

}

int Barquitos::getNColumnas(){

	return nColumnas;

}

/////////////


Barquitos& Barquitos::operator = (const Barquitos& b){

	if (this != &b){ //Si no es el mismo objeto , procedemos con la copia

		liberarMemoria(); //Liberamos la memoria de la matriz , ya que la matriz del otro objeto puede tener tamaño distinto
		
		reservaMemoria(b.nFilas , b.nColumnas); //Hacemos una matriz con el mismo tamaño que la del otro objeto
		copiarDatos(b);							//y copiamos todos los elementos


	}

	return(*this);


}











