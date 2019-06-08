#ifndef CELDA_H
#define CELDA_H

#include <iostream>
using namespace std;

class Celda{
	private:
		Celda* siguiente;
		double valor;
	public:
		Celda(double Valor);

		Celda* obtenerSiguiente();
		double obtenerValor();
		
		void asignarSiguiente(Celda* siguiente);
		void asignarValor(double valor);

		void mostrar();

};

#endif /*CELDA_H*/
