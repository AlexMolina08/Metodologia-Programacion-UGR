#ifndef UTILIDADES_H
#define UTILIDADES_H

void copiaElementos(const int origen[] , int destino[] , int inicio , int fin);
void imprimirArray(const int v[], int tam);

int obtenerSecuenciaCreciente(const int v[] , int tam , int pos_in , int &tam_seq);
void obtenerMayorSecuenciaMonotonaCreciente(const int v[] , int tam , int sc[] , int &tam_seq);

#endif /*UTILIDADES_H*/
