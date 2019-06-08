/*
 *@brief Clase que representa un circulo
 *@author Alejandro Molina Criado
 *@date 28/02/19
*/
#ifndef CIRCULO_H
#define CIRCULO_H

#include "punto.h"

class Circulo{
	private:
		Punto centro; //Se llama al constructor por defecto de punto
		double radio;
	public:
		Circulo(){
			radio = 0;		
		}

		Circulo(Punto c , double r){
			centro = c;
			radio = r;		
		}

		void setCentro(Punto c){
			centro = c;		
		}

		void setRadio(double r){
			radio = r;		
		}

		Punto getCentro() const{
			return centro;		
		}

		double getRadio() const{
			return radio;		
		}

		/*Métodos implementados fuera del cuerpo de Circulo*/

		void mostrar() const;

		void leerDatos();

		double calcularArea() const;
};

#endif /*CIRCULO_H*/

