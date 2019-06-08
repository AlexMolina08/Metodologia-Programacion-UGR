#include <iostream>
#include "Celda.h"
#include "Lista.h"

using namespace std;

int main(){
	

	Lista l;
	
	int util;

	l.agregarElemento(4);
	l.agregarElemento(3);
	l.agregarElemento(2);
	l.agregarElemento(1);

	Lista* lista = l.particionar(2, util);

	lista[0].imprimir();
	lista[1].imprimir();

	return 0;
}
