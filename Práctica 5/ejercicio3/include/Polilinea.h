#include "Punto.h"
class Polilinea{
	private:
		Punto* p;
		int num;
	public:
		Polilinea();
		~Polilinea();
		Polilinea(const Polilinea& otro);

		int getNum()const;
		Punto* getP()const;
		void setP(Punto* p);
		void setNum(int n);

		void liberaMemoria();
		void redimensiona(int numFinal);
		void addPunto(Punto& p);


		Polilinea operator+(const Polilinea& otro);
		Polilinea& operator=(const Polilinea& otro);
};
