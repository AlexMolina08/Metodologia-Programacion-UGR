#include "utilidades.h"

ostream& operator<<(ostream& flujo , Celda& c){
	flujo<<c.getValor()<<" ";
}

ostream& operator<<(ostream& flujo , Lista& l){


	flujo<<"\n**LISTA**\n";
	Celda* aux = l.getPrimero();
	if(aux != 0){
		
		while(aux != 0){
			flujo<<*aux;			
			aux = aux->getSiguiente();
		}
		
	}

	flujo<<"\n";
	return flujo;

}
