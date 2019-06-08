/*
	*AUTOR: Alejandro Molina Criado
*/
#ifndef CELDA_H
#define CELDA_H

typedef double TipoBase;

class Celda{

	private:
		TipoBase valor;
		Celda *sig;
	public:
		/*	Constructores y destructor	*/
		Celda();
		Celda(int valor);
		~Celda();
		Celda(TipoBase valor);

		/*	Métodos para el manejo de la celda	*/
		Celda* getSiguiente();
		TipoBase getValor()const;	
		void setSiguiente(Celda *sig);	

		

};

#endif /*CELDA_H*/
