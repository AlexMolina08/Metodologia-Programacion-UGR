#include <iostream>
#include "Skyline.h"
#include "utilidades.h"
#include <cctype>
using namespace std;

int main(){
	
	cout<<"\n --- EJERCICIO 6 --- \n\n";
	char resp;
	double inicio , fin , altura;
	int indice;


	cout<<"Añada edificios al skyline:\n\n";
	cout<<"Ingrese edificio (inicio-espacio-fin-espacio-altura) -> ";
	cin>>inicio>>fin>>altura;
	Skyline sky(inicio,fin,altura);
	cout<<"\n¿Hay más edificios? (s/n) -> "; cin>>resp;
	while(tolower(resp) == 's'){
		cout<<"\nIngrese edificio (inicio-espacio-fin-espacio-altura) -> ";
		cin>>inicio>>fin>>altura;
		sky.addEdificio(inicio,fin,altura);
		cout<<"\n¿Hay más edificios? (s/n) -> "; cin>>resp;
	}
	
	cout<<sky;

	resp = 's';

	while(tolower(resp) == 's'){
		
		cout<<"Ingrese indice (entre el 0 - "<<sky.getTam() - 1 << ") -> ";
		cin>>indice;

		cout<<"Abcisa: "<<sky[indice]<<endl;

		cout<<"¿Quiere ingresar otro índice? -> "; cin>>resp;

	}

	return 0;
}
