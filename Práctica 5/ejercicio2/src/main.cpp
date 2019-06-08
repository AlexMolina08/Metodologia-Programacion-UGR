/*
	*AUTOR: Alejandro Molina Criado
*/
#include <iostream>
#include "BigInt.h"
#include "utilidades.h"

using namespace std;

int main(){

	BigInt numeros[2];
	int resp;

	for(int i = 0 ; i< 2 ; i++){
		cout<<"\n**** BIG INT ****\n";
		cout<<"\n**NÚMERO "<<i<<" **\n";
		cout<<"\nIngrese el primer número del 0-9 (número >10 para terminar)\n";
		cin>>resp;

		while(resp < 10){
			numeros[i].addF(resp);
			cin>>resp;
		}

		cout<<"Has introducido el número "<<numeros[i]<<endl;

	}

	BigInt suma = numeros[0] + numeros[1];

	cout<<"La suma de los números es:"<<suma;

	return 0;
}
