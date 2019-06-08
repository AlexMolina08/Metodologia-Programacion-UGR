#include "Celda.h"

Celda::Celda(double valor){
	this->valor = valor;
	this->siguiente = 0 ;
}

Celda* Celda::obtenerSiguiente(){

	return siguiente;

}

double Celda::obtenerValor(){

	return valor;

}

void Celda::asignarSiguiente(Celda* siguiente){

	this->siguiente = siguiente;

}

void Celda::asignarValor(double valor){
	this->valor = valor;
}

void Celda::mostrar(){

	cout<<this->obtenerValor()<<" ";

}












