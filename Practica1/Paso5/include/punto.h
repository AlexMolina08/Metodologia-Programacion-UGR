/*	
 *@brief Clase que representa un punto
 *@author Alejandro Molina Criado
 *@date 28/02/19
*/

#ifndef PUNTO_H //Línea de compilación condicional
#define PUNTO_H

class Punto{
	private:
		double x;
		double y;
	public:
		Punto(){
			x = 0; 
			y = 0;		
		}

		Punto(double xV , double yV){
			x = xV;
			y = yV;
		}

		void setX(int xV){
			x = xV;
		}

		void setY(int yV){
			y = yV;		
		}

		double getX() const{
			return x;		
		}

		double getY() const{
			return y;
		}
		
		/*Métodos implementados fuera del cuerpo de Punto*/

		void mostrar() const;
		void leerDatos();
};	

#endif /*PUNTO_H*/
