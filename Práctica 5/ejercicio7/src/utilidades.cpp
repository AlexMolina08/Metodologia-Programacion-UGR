#include "utilidades.h"

ostream& operator<<(ostream& os , const Pareja& otro){

	os<<"\tDato: "<<otro.getDato()<<endl<<"\tNº de repeticiones: "<<otro.getNVeces()<<"\n----------------------------------\n";

}

ostream& operator<<(ostream& flujo , const Precuencias& otro){

	if(otro.getNPares() > 0){
		Pareja* p = otro.getParejas();
		flujo<<"\n***PRECUENCIA***\nNºParejas: " << otro.getNPares()<<"\n";

		for (int i = 0 ; i < otro.getNPares() ; i++)
			flujo<<p[i]<<" ";

		flujo<<endl;
	}else{
		flujo<<"\n --- PRECUENCIA VACÍA --- \n";
	}

	return flujo;
}
