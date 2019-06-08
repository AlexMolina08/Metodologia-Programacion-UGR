#include <iostream>
#include "BigInt.h"

using namespace std;

BigInt::BigInt(){

	primero = 0;

}

BigInt::BigInt(const BigInt& otro){	
	copiaValores(otro);
}

void BigInt::copiaValores(const BigInt& otro){
	primero = 0;//Hacemos que apunte a 0 al principio
	Celda* aux = otro.primero;
	addI(aux->getValor());
	while(aux->getSiguiente() != 0){
		aux = aux->getSiguiente();
		addI(aux->getValor());

	}
}

BigInt::~BigInt(){
	liberaMemoria();
}

Celda* BigInt::getPrimero(){
	return primero;
}

void BigInt::setPrimero(Celda* primero){
	this->primero = primero;

}

void BigInt::addI(int valor){

	if(primero != 0){
		Celda* aux = primero;
		Celda* nueva = new Celda(valor);

		while(aux->getSiguiente() != 0)
			aux = aux->getSiguiente();

		aux->setSiguiente(nueva);	

	}else{
		setPrimero(new Celda(valor));
	}
}

void BigInt::addF(int valor){
	
	if (primero != 0){

		Celda* aux = primero;
		setPrimero(new Celda(valor));
		primero->setSiguiente(aux);


	}else{
		setPrimero(new Celda(valor));
	}

}

int BigInt::longitud()const{
	int contador = 0;

	if(primero != 0){
		
		contador++;
		Celda* aux = primero;
		while(aux->getSiguiente() != 0){
			contador++;
			aux = aux->getSiguiente();
		}				

		
	}

	return contador;
}


void BigInt::mostrar(){
	
	if(primero != 0){

		int tam = longitud();
		Celda* direcciones[tam];
		Celda* aux = primero;
		
		for(int i = 0 ; i < tam ; i++){
			direcciones[i] = aux;
			aux = aux->getSiguiente();
		}

		for(int i = tam - 1 ; i >= 0 ; i--){
			direcciones[i]->mostrar();
		}
		
	}

	cout<<endl;
	
}


void BigInt::liberaMemoria(){	

	Celda* aux;
	Celda* siguiente = primero;

	while(siguiente != 0){
		aux = siguiente;	
		siguiente = siguiente->getSiguiente();
		delete aux;
	}
	
}


/*
	*Sobrecarga del operador =
	*Liberamos la memoria del objeto y copiamos los valores del origen
*/
BigInt& BigInt::operator=(const BigInt& otro){	

	liberaMemoria();
	copiaValores(otro);


}

BigInt BigInt::operator+(BigInt& n1){
	BigInt resultado;

	if(getPrimero() == 0 || n1.getPrimero() == 0) return resultado;

	TipoBase carry = 0;
	TipoBase suma;
	
	BigInt mayor = *this , menor = n1;

	
	//primero vemos qué BigInt tiene más celdas
	if(mayor.longitud() < menor.longitud()){
		mayor = n1;
		menor = *this;
	}
		
	Celda* cMayor = mayor.getPrimero();
	Celda* cMenor = menor.getPrimero();

	while(cMenor != 0){
		suma = cMayor->getValor() + cMenor->getValor() + carry;
		carry=0;
		if(suma >= 10){
			while(suma >= 10){ //Si no , calculamos el acarreo y en la celda dejamos el resto
				carry++;
				suma-=10;
			}
		}		

		resultado.addI(suma);		

		cMenor = cMenor->getSiguiente();
		cMayor = cMayor->getSiguiente();
	}

	while(cMayor != 0){
		suma = cMayor->getValor() + carry;
		carry=0;
		if(suma >= 10){
			while(suma >= 10){ //Si no , calculamos el acarreo y en la celda dejamos el resto
				carry++;
				suma-=10;
			}
		}	
		resultado.addI(suma);
		cMayor = cMayor->getSiguiente();

	}


	if(carry != 0) resultado.addI(carry);
	

	return resultado;

}
















