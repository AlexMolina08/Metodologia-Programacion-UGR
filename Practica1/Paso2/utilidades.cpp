#include "utilidades.h"
#include <cmath>

double calcularDistancia(Punto p1 , Punto p2){
	double distancia = sqrt(pow(p2.getX()-p1.getX(),2) + pow(p2.getY()-p1.getY(),2));

	return distancia;
}

double calcularDistancia(Circulo c1 , Circulo c2){
	Punto centro1 , centro2;
	centro1 = c1.getCentro();
	centro2 = c2.getCentro();

	return calcularDistancia(centro1 , centro2);
}

Punto calcularPuntoMedio(Punto p1 , Punto p2){
	double xMedio , yMedio;
	xMedio = ( p1.getX() + p2.getX() ) / 2;
	yMedio = ( p1.getY() + p2.getY() ) / 2;
	Punto pMedio(xMedio , yMedio);

	return pMedio;
}

/*Función que comprueba si un punto es interior a un circulo*/
bool comprobarInterior(Punto p , Circulo c){
	bool esInterior = false;
	Punto centroCirculo = c.getCentro();
	double distancia = calcularDistancia(p,centroCirculo);
	
	if (distancia <= c.getRadio())
		esInterior = true;

	return esInterior;
}



