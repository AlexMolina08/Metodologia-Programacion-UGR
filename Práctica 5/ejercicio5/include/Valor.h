#ifndef VALOR_H
#define VALOR_H
#include <iostream>
using namespace std;
class Valor{

	private:
		int fila , columna;
		double contenido; //Valor numérico que representa	

	public:
		Valor();
		Valor(int f , int c , double contenido);

		void setFila(int f);
		void setColumna(int c);
		void setContenido(double contenido);
		int getFila();
		int getColumna();
		double getContenido()const;

		Valor& operator=(const Valor& v);

		friend ostream& operator<<(ostream& os,const Valor& v);

};

inline ostream& operator<<(ostream& os,const Valor& m)
{
	os<<m.getContenido();
	return os;
}


#endif /*VALOR_H*/
