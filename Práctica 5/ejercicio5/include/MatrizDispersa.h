#ifndef MATRIZ_H
#define MATRIZ_H

#include "Valor.h"


class MatrizDispersa{

	private:
		int nFilas , nColumnas;
		Valor* valores;
		int nValores; //tamaño del array valores
	
	public:
		MatrizDispersa();
		MatrizDispersa(int n , int c , Valor* v , int tam);
		MatrizDispersa(const MatrizDispersa& otro);
		MatrizDispersa(int* arrayFil , int* arrayCol , double* arrayVal , int util);
		~MatrizDispersa();

		Valor* getValores()const; //Nos da la dirección de memoria del inicio del vector

		void liberaMemoria(); 
		MatrizDispersa* operator+(const MatrizDispersa& otro);
		friend ostream& operator<<(ostream& os,const MatrizDispersa& m);

};


inline ostream& operator<<(ostream& os,const MatrizDispersa& m)
{
	os<<"\n *** MATRIZ DISPERSA *** \n";
	os << "Filas: " << m.nFilas << ", Columnas: " << m.nColumnas << endl;
	os << "Valores:\n";
	Valor* v = m.getValores();
	for(int i=0;i<m.nValores;i++){
    	os << m.valores[i] << endl;
  	}

	os<<"Numero de Valores: " << m.nValores <<endl;

	return os;
}


#endif 
