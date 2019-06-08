#include "Polilinea.h"
#include <iostream>
using namespace std;
Polilinea::Polilinea(){
	num=0;
	p = new Punto[num];
}

Polilinea::~Polilinea(){
	delete[] p;
}


Polilinea::Polilinea(const Polilinea& otro){
	int numFinal = otro.getNum();
	Punto* aux = otro.getP();
	Punto* newP = new Punto[numFinal];
	
	p = 0;

	for(int x = 0 ; x < numFinal ; x++){
		newP[x] = aux[x];
	}

	p = newP;
	num = numFinal;

}

int Polilinea::getNum() const{
	return num;
}

Punto* Polilinea::getP()const{
	return p;
}

void Polilinea::setP(Punto* p){
	p = 0;
	this->p = p;
}

void Polilinea::setNum(int n){
	num = n;
}

void Polilinea::addPunto(Punto& punto){
	redimensiona(num+1);
	p[num-1] = punto;	
}

void Polilinea::liberaMemoria(){
	num = 0;
	delete[] p;
}


void Polilinea::redimensiona(int numFinal){
	Punto* resultado = new Punto[numFinal];//Creamos un nuevo vector de puntos con el tamaño deseado
		
	for(int i = 0 ; i<num ; i++){ //Copiamos en el nuevo vector los valores del vector de Puntos de la clase
			resultado[i] = p[i];
	}
		/*
		*Tras la creación del nuevo vector con los datos del actual
		*se procede a liberar la memoria del actual y asignarsela al nuevo	
	*/
	liberaMemoria();
	p = resultado;
	num = numFinal;

}


Polilinea Polilinea::operator+(const Polilinea& otro){
	Polilinea resultado;
	Punto* pOtro = otro.getP();

	for(int i = 0 ; i < num ; i++){
		resultado.addPunto(p[i]);
	}

	for(int j = 0 ; j < otro.getNum() ; j++){
		resultado.addPunto(pOtro[j]);
	}

	return resultado;
	
}

Polilinea& Polilinea::operator=(const Polilinea& otro){
	int numFinal = otro.getNum();
	Punto* aux = otro.getP();
	Punto* newP = new Punto[numFinal];
	
	liberaMemoria();

	for(int x = 0 ; x < numFinal ; x++){
		newP[x] = aux[x];
	}

	p = newP;
	num = numFinal;
}
























