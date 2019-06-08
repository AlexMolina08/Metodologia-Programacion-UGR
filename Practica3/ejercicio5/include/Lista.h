#ifndef LISTA_H
#define LISTA_H

#include "Celda.h"

class Lista {
private :
	Celda *primero;

public :
    /**
     * Constructor por defecto
     */
    Lista();

	/**
		*Metodo para establecer primer Elemento
	*/

	void establecerPrimero(Celda* pCelda);	

    /**
     * Metodo para devolver la longitud de la lista
     * @return
     */
    int longitud();

    /**
     * Metodo para agregar elemento a la lista, al inicio
     * @param valor
     */
    void agregarElemento(double valor);

    /**
     * Metodo para imprimir el contenido de la lista
     */
    void imprimir();

    /**
     * Metodo para particionar la lista en trozos
     * @param tam
     * @param util
     * @return
     */
    Lista *particionar(int tam, int &util);
};

#endif	/* LISTA_H */
