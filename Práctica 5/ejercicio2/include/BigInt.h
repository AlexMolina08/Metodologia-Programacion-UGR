/*
	*AUTOR: Alejandro Molina Criado
*/
#ifndef BIG_INT
#define BIG_INT

#include "Celda.h"
#include <iostream>
using namespace std;

/*
	*BigInt será una lista dinámica
	*Su parámetro es un puntero de Celda , que apunta a la primera celda de la lista.
*/
class BigInt{

	private:
		Celda* primero;
	
	public:
		BigInt();//Constructor por defecto
		BigInt(const BigInt& otro);//Constructor de copia
		~BigInt();
		
		Celda* getPrimero();
		void setPrimero(Celda* primero);
		void addI(int valor); //Añadimos elemento mas significativo
		void addF(int valor); //Añadimos elemento menos significativo
		void mostrar();	
		void liberaMemoria();
		void copiaValores(const BigInt& otro);
		int longitud()const;
		

		BigInt& operator=(const BigInt& otro);
		BigInt operator+(BigInt &n1);



};

#endif /*BIG_INT*/
