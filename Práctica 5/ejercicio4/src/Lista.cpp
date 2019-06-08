#include <iostream>
#include "Lista.h"

using namespace std;

Lista::Lista(){

	contenido = 0;
	cout<<"\n---Se ha creado una nueva lista---\n";

}

Lista::Lista(const Lista& otro){	
	copiaValores(otro);
	cout<<"\n---Se ha creado una lista copiada---\n";
}


Lista::~Lista(){
	liberaMemoria();
}


void Lista::copiaValores(const Lista& otro){
	contenido = 0;//Hacemos que apunte a 0 al principio
	Celda* aux = otro.contenido;
	add(aux->getValor());
	while(aux->getSiguiente() != 0){
		aux = aux->getSiguiente();
		add(aux->getValor());

	}
}


Celda* Lista::getPrimero(){
	return contenido;
}

void Lista::setPrimero(Celda* contenido){
	this->contenido = contenido;

}

void Lista::add(int valor){

	if(contenido != 0){
		Celda* aux = contenido;
		Celda* nueva = new Celda(valor);

		while(aux->getSiguiente() != 0)
			aux = aux->getSiguiente();

		aux->setSiguiente(nueva);	

	}else{
		setPrimero(new Celda(valor));
	}
}

int Lista::longitud()const{
	int contador = 0;

	if(contenido != 0){
		
		contador++;
		Celda* aux = contenido;
		while(aux->getSiguiente() != 0){
			contador++;
			aux = aux->getSiguiente();
		}				

		
	}

	return contador;
}


void Lista::liberaMemoria(){	

	Celda* aux;
	Celda* siguiente = contenido;

	while(siguiente != 0){
		aux = siguiente;	
		siguiente = siguiente->getSiguiente();
		delete aux;
	}

	cout<<"\nSe ha eliminado una lista\n";
	
}
















