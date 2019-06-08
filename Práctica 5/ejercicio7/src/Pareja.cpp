#include "Pareja.h"
#include <iostream>
using namespace std;


Pareja::Pareja(){

	dato = 0; 
	nVeces = 0;
}

Pareja::Pareja(int d){

	dato = d;
	nVeces = 0;

}

Pareja::Pareja(const Pareja& otro){
	dato = otro.dato;
	nVeces = otro.nVeces;
}

Pareja::~Pareja(){
	dato = 0;
	nVeces = 0;
}

void Pareja::setNVeces(int n){
	nVeces = n;
}

int Pareja::getDato()const{
	return dato;
}

int Pareja::getNVeces()const{
	return nVeces;
}


Pareja& Pareja::operator=(const Pareja& otro){
	
	if(this != &otro){
		dato = otro.getDato();
		nVeces = otro.getNVeces();
	}	

	return *this;

}

bool Pareja::operator==(const Pareja& otro){
	bool resultado;
	(dato != otro.dato || nVeces != otro.nVeces) ? resultado = false : resultado = true;	
	return resultado;

}

bool Pareja::operator!=(const Pareja& otro){
	
	return !(*this==otro); //Devolvemos la negación del operador lógico contrario

}
