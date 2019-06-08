/*
	*AUTOR: Alejandro Molina Criado
*/
#include <iostream>
#include "Barquitos.h"
#include <cctype>

using namespace std;

int main(){
	int nFilas , nCol;
	cout<<"--- Juego de los Barquitos ---\n";
	
	cout<<"Configuración del tablero:\n\tNumero de filas:"; cin>>nFilas;
	cout<<"\tNumero de Columnas:"; cin>>nCol;

	Barquitos tablero(nFilas, nCol);
	bool continuar = true;
	char resp , orientacion;
	int f,c ,barco;
	while(continuar){
		cout<<endl;
		tablero.muestraTablero();
		cout<<"¿ Ingresar barco ? s/n -> "; cin>>resp;
		if(tolower(resp) == 's'){
			cout<<"Fila-espacio-Columna -> "; cin>>f>>c;
			cout<<"Tamaño del barco -> "; cin>>barco;
			cout<<"¿En vertical u Horizontal? V/H ->"; cin>>orientacion;
			tablero.colocaBarco(f,c,barco,orientacion);
		}else{
			continuar = false;
		}
		

	}

	return 0;
}
