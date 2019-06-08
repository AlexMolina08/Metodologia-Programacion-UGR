#include "utilidades.h"

ostream& operator<<(ostream& flujo , const Skyline& otro){

	flujo<<"\n\n*** SKYLINE ***\n";
	double* abcisas = otro.getAbcisas();
	double* alturas = otro.getAlturas();
	int tam = otro.getTam();
	flujo<<"Abcisas: ";
	for(int i = 0 ; i < tam ; i++)
		flujo<<abcisas[i]<<" ";
	flujo<<endl;
	flujo<<"Alturas: ";
	for(int i = 0 ; i < tam ; i++)
		flujo<<alturas[i]<<" ";
	flujo<<"\n********\n";
	

}
