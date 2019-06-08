/*
	*nombre: Alejandro Molina Criado
	*fecha: 03/04/19
*/
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	const int TAM = 8; //A...H
	string nombreFichero;	
	char partido;
	int votos[TAM] = {}, nVotos;
	int nDatos;
	fstream entrada;
	ofstream salida;

	cout<<"introduce nombre fichero:"; cin>>nombreFichero;
	entrada.open(nombreFichero);	
	if (!entrada){
		cout<<"error"<<endl;		
	}else{
		entrada>>nDatos;
		for(int c = 0 ; c < nDatos ; c++){
			entrada>>partido;
			entrada>>nVotos;
			votos[partido-65]+=nVotos; //Sabemos que en ACSII 'A' = 65
		}
	}

	entrada.close();
	
	salida.open("ResultadoElecciones.txt");
	
	for(int i =  0 ; i<TAM ; i++) 
		salida<<"El partido "<<char(i+65)<<" ha obtenido "<<votos[i]<<" votos\n";

	salida.close();


}
