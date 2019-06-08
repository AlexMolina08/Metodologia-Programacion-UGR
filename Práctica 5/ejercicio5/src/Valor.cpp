#include "Valor.h"

Valor::Valor(){
	setFila(0);
	setColumna(0);
	setContenido(0);
}

Valor::Valor(int f , int c , double contenido){
	setFila(f);
	columna = c;
	setContenido(contenido);
}

void Valor::setFila(int f){
	fila = f;
}

void Valor::setColumna(int c){
	columna = c;
}

void Valor::setContenido(double contenido){
	this->contenido = contenido;
}

int Valor::getFila(){
	return fila;
}

int Valor::getColumna(){
	return columna;
}


double Valor::getContenido()const{
	return contenido;
}


Valor& Valor::operator=(const Valor& v)
{
  if(this!=&v)
  {
    fila = v.fila;
    columna = v.columna;
    contenido = v.contenido;
  }

  return *this;
}



