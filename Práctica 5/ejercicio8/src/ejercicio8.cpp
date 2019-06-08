#include "Menu.h"
#include <iostream>
using namespace std;

int main()
{
  cout << "--- EJERCICIO 9 --- \n";

  char t[] = "TÍTULO POR DEFECTO";
  char o1[] = "1. Imprimir";
  char o2[] = "2. Salir";

  char **opc = new char*[2];
  opc[0] = new char[getTam(o1)];
  opc[0] = o1;
  opc[1] = new char[getTam(o2)];
  opc[1] = o2;


  Menu *m = new Menu(t,opc,2);

  cout << *m << endl;

  char o3[] = "3. Tercera opcion";
  m->agregarOpcion(o3);
  cout << *m << endl;

  Menu *m2 = new Menu(*m);
  
  char bienvenida[] = "Bienvenido al menú";

  m2->setTitulo(bienvenida);
  cout << *m2 << endl;

  Menu *m3 = m2;
  char nTitulo[] = "Nuevo titulo";
  m3->setTitulo(nTitulo);
  cout << *m3 << endl;

  return 0;
}
