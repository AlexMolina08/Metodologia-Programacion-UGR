#include "utilidades.h"

ostream& operator<<(ostream& flujo , Punto& p){
	flujo<<"("<<p.getX()<<","<<p.getY()<<")";
}

ostream& operator<<(ostream& flujo , Polilinea& p){
		
	if(p.getNum() > 0){	
		Punto* aux = p.getP();
		flujo<<"\n** Polilinea **\n";
		for(int i = 0 ; i < p.getNum() ; i++){
			flujo<<"Punto "<<i<<":"<<aux[i]<<endl;
		}
	}else{
		flujo<<"\n--Polilinea vacía--\n";
	}
}
