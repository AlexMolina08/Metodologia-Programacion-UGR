#include <iostream>
#include "Celda.h"
#include "Lista.h"
#include "utilidades.h"
using namespace std;


void ingresaValores(Lista& l){
	char resp = 's';
	int valorCelda , contador = 0;
	while(tolower(resp) == 's'){
		cout<<"Ingrese valor para la celda "<<" -> "; cin>>valorCelda;
		l.add(valorCelda);
		contador++;
		cout<<"Continuar? (s/n) -> "; cin>>resp;
	}
}

int main(){
	
	Lista l;

	ingresaValores(l);
	

	cout<<l;

	Lista l2(l);

	ingresaValores(l2);	

	cout<<l2;


	return 0;
}
