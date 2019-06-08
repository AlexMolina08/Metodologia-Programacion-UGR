/*
	*AUTOR: Alejandro Molina Criado
*/
#ifndef LISTA_H
#define LISTA_H

#include "Celda.h"
#include <iostream>
using namespace std;


class Lista{

	private:
		Celda* contenido;
	
	public:
		Lista();//Constructor por defecto
		Lista(const Lista& otro);//Constructor de copia
		~Lista();
		
		Celda* getPrimero();
		void setPrimero(Celda* primero);
		void copiaValores(const Lista& otro);
		void add(int valor);
		void liberaMemoria();
		int longitud()const;



};

#endif /*BIG_INT*/
