#include <iostream>
#include "circulo.h"
#include "punto.h"
#include "utilidades.h"
using namespace std;

int main(){
	Circulo c1 , c2;
	Punto centro;
	do{
		c1.leerDatos();
		c2.leerDatos();	
	}while(calcularDistancia(c1 , c2) == 0);

	centro = calcularPuntoMedio(c1.getCentro(),c2.getCentro());
	Circulo c3(centro , calcularDistancia(c1,c2)/2);
	cout<<"El círculo que pasa por los dos anteriores es: ";
	c3.mostrar();

	return 0;
}
