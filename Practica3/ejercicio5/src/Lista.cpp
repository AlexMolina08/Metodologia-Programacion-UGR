/*
	*AUTOR: Alejandro Molina Criado
*/
#include "Lista.h"
#include <iostream>
using namespace std;

Lista::Lista(){

	primero = 0;

}

int Lista::longitud(){
	//primero->mostrar();
	int contador = 0;
	if(primero == 0)
		 return 0;
	contador++;
	Celda* aux = primero;
	while(aux->obtenerSiguiente() != 0){
		aux = aux->obtenerSiguiente();		
		contador++;
	}

	return contador;
}

void Lista::establecerPrimero(Celda* pCelda){

	this->primero = pCelda;

}

void Lista::imprimir(){	
	if(primero != 0){
		Celda* c = primero;
		c->mostrar();
		while(c->obtenerSiguiente() != 0){
			c = c->obtenerSiguiente();
			c->mostrar();
		}
	} 

	cout<<endl;

}

void Lista::agregarElemento(double valor){
	Celda* agregada = new Celda(valor);
	if (primero == 0){
		primero = agregada;
	}else{
		Celda* aux = primero;
		primero = agregada;
		primero->asignarSiguiente(aux);
	}
	
}



Lista* Lista::particionar(int tam , int &util){
	util = (this->longitud() / tam);
	if(util * tam < this->longitud()) util++;
	
	Lista *l = new Lista[util];
	Celda *c = primero , *primero;

	for(int i=0; i<util ; i++){
		
		l[i].primero = c;
		for(int k=1; k<tam && c->obtenerSiguiente() != 0 ; k++)
			c = c->obtenerSiguiente();
		
		primero = c->obtenerSiguiente();
		c->asignarSiguiente(0);

		c = primero;

	}
	return l;
}








