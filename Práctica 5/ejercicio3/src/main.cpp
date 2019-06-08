#include <iostream>
#include "Punto.h"
#include "utilidades.h"
#include <cctype>
using namespace std;

int main(){
	cout<<"\n*** EJERCICIO 3 ***\n\n";
	int n;
	char resp = 's';
	int x , y;
	cout<<"Ingrese el número de figuras: ";cin>>n;
	Polilinea* polis = new Polilinea[n] , suma;
	Punto p;	
	
	for(int i = 0 ; i < n ; i++){
		cout<<"\nFigura 1\n";
		resp = 's';
		while(tolower(resp) == 's'){
			cout<<"---------\nNuevo punto:\n";
			cout<<"Ingrese x-espacio-y -> "; cin>>x>>y;
			Punto p(x,y);
			polis[i].addPunto(p);
			cout<<"¿ TIENE MÁS PUNTOS LA FIGURA ?(s/n) -> "; cin>>resp;
		}
	}	

	
	cout<<"\n-- Has ingresado las siguientes figuras --\n";
	
	for(int j = 0 ; j < n ; j++){
		cout<<polis[j];
		suma = suma + polis[j];
	}

	cout<<"\nLa suma de las figuras es:\n"<<suma;

	cout<<"\n**FIN DE LA EJECUCIÓN**\n";
	delete[] polis;
	return 0;
}
