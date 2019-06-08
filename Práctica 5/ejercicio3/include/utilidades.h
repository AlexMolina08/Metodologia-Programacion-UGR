#ifndef UTILIDADES_H
#define UTILIDADES_H

#include "Punto.h"
#include "Polilinea.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& flujo , Punto& p);
ostream& operator<<(ostream& flujo , Polilinea& p);

#endif /*UTILIDADES_H*/
