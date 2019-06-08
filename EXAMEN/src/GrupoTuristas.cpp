#include "GrupoTuristas.h"
#include <iostream>

using namespace std;


GrupoTuristas::GrupoTuristas(int numTuristas){
	this->nTuristas = numTuristas;
	turistas = new Turista[numTuristas]; //creación vector dinamico con el numero de turistas dado
	cout<<"Se ha creado un grupo con "<<numTuristas<<" turistas\n";

}

GrupoTuristas::~GrupoTuristas(){

	delete[] turistas;

}

void GrupoTuristas::inicializaVector(){
	
	for(int i = 0 ; i < nTuristas ; i++){
		
		cout<<"--- Turista"<<i<<" ---\n" ;
		
		cout<<"Ingrese id: "; cin>>turistas[i].id;

		cout<<"Ingrese primer nombre: "; cin>>turistas[i].nomsapel[0];
		cout<<"Ingrese segundo nombre: "; cin>>turistas[i].nomsapel[1];
		cout<<"Ingrese primer apellido: "; cin>>turistas[i].nomsapel[2];
		cout<<"Ingrese segundo apellido: "; cin>>turistas[i].nomsapel[3];
		cout<<"Ingrese ID nacionalidad (tipo entero): "; cin>>turistas[i].nacionalidad;

		cout<<"Ingrese hora de reserva (horas -espacio- minutos)"; cin>>turistas[i].hora.hh; cin>>turistas[i].hora.mm;
		

	}
}


GrupoTuristas GrupoTuristas::eliminarReserva(Hora h){

	cout<<nTuristas<<endl;
	int c = 0;
	for(int i = 0; i < nTuristas ; i++){
		if(turistas[i].hora.hh == h.hh && turistas[i].hora.mm == h.mm)
			c++;
	}
	

	GrupoTuristas resultado(nTuristas-c);
	c=0;

	for(int i = 0 ; i<nTuristas ; i++){
		if(turistas[i].hora.hh == h.hh && turistas[i].hora.mm == h.mm){
			cout<<"Turista "<<turistas[i].id<<" se va\n";
		}else{
			resultado.turistas[c] = turistas[i];
			c++;
		}

	}	

	return resultado;

}


void GrupoTuristas::mostrarVector(){

	for(int i = 0 ; i < nTuristas ; i++){
		cout<<turistas[i].id<<" ";
	}

	cout<<endl;

}


GrupoTuristas GrupoTuristas::redistribuirReserva(Hora h , GrupoTuristas &originales){

	originales = eliminarReserva(h);
	int tam = originales.getNTuristas();

	GrupoTuristas nuevoGrupo(tam+2);

	Hora h1; h1.hh = 15 ; h1.mm = 32;
	Hora h2; h2.hh = 16 ; h2.mm = 45;

	nuevoGrupo.setHora(tam , h1);
	nuevoGrupo.setHora(tam+1,h2);
	
	return nuevoGrupo;

}

int GrupoTuristas::getNTuristas(){
	
	return nTuristas;

}

void GrupoTuristas::setHora(int pos , Hora h){

	this->turistas[pos].hora.hh = h.hh;
	this->turistas[pos].hora.mm = h.mm;
}










