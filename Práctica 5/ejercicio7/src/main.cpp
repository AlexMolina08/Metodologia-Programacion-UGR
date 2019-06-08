#include <iostream>
#include "Precuencias.h"
#include "utilidades.h"
#include <cctype>
using namespace std;

int main(){
	Precuencias p1 , p2;
	char continuar = 's';
	int dato;
	
	cout<<"\n----- EJERCICIO 7 -------\n";

	p1.addValor(1998);
	p1.addValor(424);

	cout<<p1;

	cout<<"\n**Creación de una nueva Precuencia**\n";
	
	while(tolower(continuar) == 's'){
		cout<<"Introduce entero (puede tener tantos dígitos como se desee) -> "; cin>>dato;
		p2.addValor(dato);
		cout<<"¿Introducir otro dato? (s/n) -> "; cin>>continuar;
	} 

	cout<<p2;


	p1 == p2 ? cout<<"\nLa precuencia introducida es igual a la que se tenía\n" : cout<<"\nLas precuencias son distintas\n";

	cout<<endl;
	return 0;
}
