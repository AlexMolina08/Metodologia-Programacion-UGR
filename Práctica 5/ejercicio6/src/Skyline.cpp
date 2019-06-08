#include "Skyline.h"

Skyline::Skyline(){
	
	tam = 1;
	abcisas = new double[tam];
	abcisas[0] = 0;
	alturas = new double[tam];
	alturas[0] = 0;

}

/**
	Constructor especifico para la creacion de un edificio
*/
Skyline::Skyline(double abcisaInicial , double abcisaFinal , double altura){

	if(abcisaFinal <= abcisaInicial || altura <= 0){ //Si los valores introducidos son erróneos, se incializa un Skyline por defecto.
		tam = 1;
		abcisas = new double[tam];
		abcisas[0] = 0;
		alturas = new double[tam];
		alturas[0] = 0;

	}else{

		tam = 2;
		abcisas = new double[tam];
		alturas = new double[tam];

		abcisas[0] = abcisaInicial;
		abcisas[1] = abcisaFinal;

		alturas[0] = altura;
		alturas[1] = 0;

	}

}

Skyline::~Skyline(){
	delete[] alturas;
	delete[] abcisas;
}

double* Skyline::getAbcisas()const{
	return abcisas;
}

double* Skyline::getAlturas()const{
	return alturas;
}

int Skyline::getTam()const{
	return tam;
}


/*
	Método que permite añadir 2 nuevas celdas al final del vector
	Nos aseguramos que el ultimo elemento de alturas sea 0
*/
void Skyline::redimensionaVectores(int size){
	double* nuevoAbcisas = new double[tam+size]();
	double* nuevoAlturas = new double[tam+size]();
	nuevoAlturas[tam-1] = 0;

	for(int i = 0 ; i < tam ; i++){
		nuevoAbcisas[i] = abcisas[i];
		nuevoAlturas[i] = alturas[i];
	}	

	tam+=size;

	delete[] abcisas; delete[] alturas; //Liberamos la memoria que teníamos

	abcisas = nuevoAbcisas; alturas = nuevoAlturas; //Asignamos los nuevos vectores

}

void Skyline::addEdificio(double abcisaInicial , double abcisaFinal , double altura){
	int redimension = 2;
	if(abcisaInicial == abcisas[tam-1] || altura == alturas[tam-1]) 
		redimension = 1;
	if(abcisaFinal > abcisaInicial && altura > 0 ){
		redimensionaVectores(redimension); //Añadimos 2 nuevos elementos a cada vector
		alturas[tam-2] = altura;
		abcisas[tam-2] = abcisaInicial; 
		abcisas[tam-1] = abcisaFinal;
	}

}


double& Skyline::operator[](int i){
	if(i>=0 && i < tam)
		return abcisas[i];
	
}

const double& Skyline::operator[](int i)const{
	if(i>=0 && i < tam)
		return abcisas[i];
}












