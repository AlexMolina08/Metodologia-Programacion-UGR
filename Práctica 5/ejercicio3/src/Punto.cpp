#include "Punto.h"


Punto::Punto(){
	setX(0);
	setY(0);
}

Punto::Punto(int x , int y){
	setX(x);
	setY(y);
}

int Punto::getY(){
	return y;
}

int Punto::getX(){
	return x;
}

void Punto::setX(int x){
	this->x = x;
}

void Punto::setY(int y){
	this->y = y;
}
