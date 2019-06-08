#include "utilidades.h"


ostream& operator<<(ostream& flujo , Celda& numero){

	flujo<<numero.getValor();
	

}

ostream& operator<<(ostream& flujo , BigInt& numero){

	if(numero.getPrimero() != 0){

		int tam = numero.longitud();
		Celda* direcciones[tam];
		Celda* aux = numero.getPrimero();
		
		for(int i = 0 ; i < tam ; i++){
			direcciones[i] = aux;
			aux = aux->getSiguiente();
		}

		for(int i = tam - 1 ; i >= 0 ; i--){
			cout<<*direcciones[i];
		}
		
	}

	cout<<endl;

}
