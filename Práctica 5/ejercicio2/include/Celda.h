/*
	*AUTOR: Alejandro Molina Criado
*/
#ifndef CELDA_H
#define CELDA_H

typedef int TipoBase;

class Celda{

	private:
		TipoBase valor;
		Celda *sig;
	public:
		/*	Constructores y destructor	*/
		Celda();
		~Celda();
		Celda(TipoBase valor);

		/*	Métodos para el manejo de la celda	*/
		Celda* getSiguiente();
		TipoBase getValor()const;	
		void setSiguiente(Celda *sig);	
		void mostrar();

		
		
		/*	SOBRECARGA DE OPERADORES	*/
		Celda& operator+(const Celda &c);

};

#endif /*CELDA_H*/
