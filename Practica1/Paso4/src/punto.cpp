#include <iostream>
#include "punto.h"

using namespace std;

void Punto::mostrar() const{
	//(x,y)
	cout<<"("<<x<<" , "<<y<<")";
}

void Punto::leerDatos(){
	cout<<"Ingrese coordenadas del punto (x,y)-> ";
	cin>>x>>y;
}
