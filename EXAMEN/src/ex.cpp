#include <iostream>
#include <string>
using namespace std;

#include "GrupoTuristas.h"

/*
	*Metodo que crea un objeto de tipo GrupoTuristas y lo inicializa
*/
GrupoTuristas cargar(){
	int numTuristas;
	cout<<"Numero de turistas en el grupo:"; cin>>numTuristas;
	
	GrupoTuristas grupo(numTuristas);

	grupo.inicializaVector();

	return grupo;

}

int main(){

	GrupoTuristas g = cargar();
	cout<<"-------\n";
	g.mostrarVector();

	Hora h;
	h.hh = 3;
	h.mm = 2;

	GrupoTuristas r = g.eliminarReserva(h);
	r.mostrarVector();

	cout<<"-----NUEVO GRUPO DE TURISTAS----\n";
	GrupoTuristas t = cargar();
	Hora h2; h2.hh = 15; h2.mm = 15;
	
	

	return 0;
}
