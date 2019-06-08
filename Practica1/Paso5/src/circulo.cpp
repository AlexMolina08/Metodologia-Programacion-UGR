#include <iostream>
#include <cmath>
#include "circulo.h"

using namespace std;

void Circulo::mostrar() const{
	//radio - (x,y)
	cout<<radio<<" - "<<"("<<centro.getX()<<","<<centro.getY()<<")\n";
}

void Circulo::leerDatos(){
	cout<<"Ingrese radio del circulo:"; 
	cin>>radio;
	cout<<"--centro--\n";
	centro.leerDatos();
}

double Circulo::calcularArea() const{
	return 2 * M_PI * pow(radio,2); //el area de un circulo es : 2*PI*radio²
}
