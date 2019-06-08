#include "Precuencias.h"

Precuencias::Precuencias(){
	parejas = 0;
	nPares = 0;
}

/**
	Constructor que crea una precuencia con una pareja pasada por argumento
*/
Precuencias::Precuencias(const Pareja& p){

	nPares = 1;
	parejas = new Pareja[nPares];
	parejas[0] = p;

}

Precuencias::Precuencias(const Precuencias& otro){

	nPares = otro.nPares;
	parejas = new Pareja[nPares];
	
	for(int i = 0 ; i < nPares ; i++)
		parejas[i] = otro.parejas[i];

}

Precuencias::~Precuencias(){
	delete[] parejas;
}

int Precuencias::getNPares()const{
	return nPares;
}

void Precuencias::setParejas(Pareja* parejas){
	this->parejas = parejas;
}

Pareja* Precuencias::getParejas()const{
	return parejas;
}

void Precuencias::addPareja(Pareja& pareja){
	nPares++;
	Pareja* newParejas = new Pareja[nPares];
	//Ahora copiamos los valores
	for(int i = 0 ; i < nPares - 1  ; i++){
		newParejas[i] = parejas[i];
	}
	//Liberamos la memoria del vector actual de parejas 
	//y asignamos el puntero a newParejas

	newParejas[nPares - 1] = pareja;
	delete[] parejas;
	parejas = newParejas;

}

void Precuencias::addValor(int v){
	string valor = to_string(v);
	
	for(int i = 0 ; valor[i] != '\0' ; i++){
		bool igual = false;
		int digito = valor[i] - '0';
		Pareja nueva(digito);
		for(int j = 0 ; j < nPares ; j++){
			
			if(digito == parejas[j].getDato()){

				int aux = parejas[j].getNVeces();
				aux++;
				parejas[j].setNVeces(aux);
				igual = true;
			}

		}

		if(!igual)
			addPareja(nueva);
			
			

	}
	
}


bool Precuencias::operator==(const Precuencias& p){

	bool resultado = true;
	
	if(nPares != p.nPares)
		resultado = false;

	else{
		
		for(int i = 0 ; i < nPares && resultado; i++)
			if(parejas[i] != p.parejas[i])
				resultado = false;

	}

	return resultado;

}

bool Precuencias::operator!=(const Precuencias& p){
	return !(*this==p);
}











