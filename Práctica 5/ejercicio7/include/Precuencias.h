#ifndef PRECUENCIAS_H
#define PRECUENCIAS_H

#include "Pareja.h"
#include <iostream>
#include <string>
#include "stdlib.h"

using namespace std;

class Precuencias{

	private:
		Pareja* parejas; 
		int nPares;

	public:
		Precuencias();
		Precuencias(const Precuencias& otro);
		Precuencias(const Pareja& p);
		~Precuencias();

		int getNPares()const;
		Pareja* getParejas()const;
		void setParejas(Pareja* p);

		void addPareja(Pareja& pareja);
		void addValor(int v);

		bool operator==(const Precuencias& p);
		bool operator!=(const Precuencias& p);
		

};

#endif
