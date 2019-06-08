#include "Celda.h"
#include <iostream>
using namespace std;

Celda::Celda(){
	valor = 0;
	sig = 0;

}

Celda::Celda(int valor){

	this->valor = valor;
	sig = 0;

}

Celda::~Celda(){
	sig = 0;
	valor = 0;

	//Realmente eliminamos las celdas dentro e la lista
}

Celda* Celda::getSiguiente(){
	return sig;
}

TipoBase Celda::getValor()const{
	return valor;
}


void Celda::setSiguiente(Celda* sig){
	this->sig = sig;
}














