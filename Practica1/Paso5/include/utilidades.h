/*
 *@brief Módulo con funciones útiles
 *@author Alejandro Molina Criado
 *@date 2019-03-01 11:33
*/

#ifndef UTILIDADES_H //Directiva condicional para el compilador
#define UTILIDADES_H

#include "punto.h"
#include "circulo.h"	

double calcularDistancia(Punto , Punto);
double calcularDistancia(Circulo , Circulo);
Punto calcularPuntoMedio(Punto , Punto);
bool comprobarInterior(Punto , Circulo);


#endif /*UTILIDADES_H*/
