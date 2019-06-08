/*
	*AUTOR: Alejandro Molina Criado
*/
#ifndef BARQUITOS_H
#define BARQUITOS_H

typedef int tipoBase;

class Barquitos{

	private:
		tipoBase **matriz;
		int nFilas , nColumnas; 

	public:
		/**CONSTRUCTORES Y DESTRUCTOR**/

		Barquitos(); //Constructor por defecto
		Barquitos(int nFilas , int nColumnas); //Constructor Parametrizado
		Barquitos(const Barquitos &b); //Constructor de copia
		~Barquitos(); //Destructor

		//**GETTERS****//
		int getNFilas();
		int getNColumnas();


		//**SOBRECARGA DE OPERADORES**//

		Barquitos & operator = (const Barquitos &b);

		/**MÉTODOS PARA GESTIONAR LA MATRIZ DINÁMICA**/
		void reservaMemoria(int nFil , int nCol);
		void copiarDatos(const Barquitos& b);
		void liberarMemoria();

		//Métodos del Tablero
		void muestraTablero();
		bool compruebaUbi(int f, int c , int barco , char o);	
		void colocaBarco(int f , int c , int barco , char o);	



};

#endif /*BARQUITOS_H*/
