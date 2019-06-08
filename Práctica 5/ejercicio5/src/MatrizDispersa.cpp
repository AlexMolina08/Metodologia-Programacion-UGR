#include "MatrizDispersa.h"

MatrizDispersa::MatrizDispersa(){
	nFilas = 0;
	nColumnas = 0;
	valores = 0;
	nValores = 0;
}

MatrizDispersa::MatrizDispersa(int n , int c , Valor* v , int num){

	nFilas = n;
	nColumnas = c;
	nValores = num;
	valores = v;

}

MatrizDispersa::MatrizDispersa(const MatrizDispersa& m)
{
	nFilas = m.nFilas;
	nColumnas = m.nColumnas;
	nValores = m.nValores;
	valores = new Valor[nValores];
	Valor* aux = m.getValores(); //obtenemos el incicio del vector a copiar

	for(int i = 0 ; i < nValores ; i++){
		valores[i] = aux[i];
	}
}


MatrizDispersa::MatrizDispersa(int* f,int* col,double* val,int tam)
{
  nFilas = nColumnas = tam;
  nValores = tam;
  valores = new Valor[nValores];
  for(int i=0 ; i<tam ; i++)
  {
    valores[i].setFila(f[i]);
    valores[i].setColumna(col[i]);
    valores[i].setContenido(val[i]);
  }
}

MatrizDispersa::~MatrizDispersa(){
	liberaMemoria();
}

void MatrizDispersa::liberaMemoria(){
	delete[] valores;
	nFilas = 0;
	nColumnas = 0;
	valores = 0;
}

Valor* MatrizDispersa::getValores()const{
	return valores;
}



MatrizDispersa* MatrizDispersa::operator+(const MatrizDispersa& otro)
{
  for(int i=0;i<nValores;i++)
  {
    for(int j=0;j<otro.nValores;j++)
    {
      if(valores[i].getFila() == otro.valores[j].getFila() && valores[i].getColumna() == otro.valores[j].getColumna())
      {
        cout << "El fil y col iguales. Aplicando suma...\n";
        valores[i].setContenido(valores[i].getContenido()+otro.valores[i].getContenido());
      }
    }
  }

  return this;
}
