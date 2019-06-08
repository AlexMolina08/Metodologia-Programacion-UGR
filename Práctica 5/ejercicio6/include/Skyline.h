#ifndef SKYLINE_H
#define SKYLINE_H

class Skyline{

	private:
		double *abcisas;
		double *alturas; //La última será 0
		int tam; //tam de los arrays
		
	public:
		Skyline();
		Skyline(const Skyline& otro);
		Skyline(double abcisaInicial , double abcisaFinal , double altura);
		~Skyline();

		void redimensionaVectores(int size);
		void addEdificio(double abcisaInicial , double abcisaFinal , double altura);

		double* getAbcisas()const;
		double* getAlturas()const;
		int getTam()const;
		

		double& operator[](int i);
		const double& operator[](int i)const;

};

#endif
