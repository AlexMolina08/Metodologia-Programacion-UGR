#ifndef PAREJA_H
#define PAREJA_H

class Pareja{

	private:
		int dato;
		int nVeces; //nº repeticiones

	public:
		Pareja();
		Pareja(int dato);
		Pareja(const Pareja& otro);
		~Pareja();

		void setNVeces(int n);		
		int getDato()const;
		int getNVeces()const;

		Pareja& operator=(const Pareja& otro); 

		//SOBRECARGA DE OPERADORES LÓGICOS
		bool operator==(const Pareja& otro);
		bool operator!=(const Pareja& otro);
	

};

#endif 
