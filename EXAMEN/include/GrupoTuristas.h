#include <string>
using namespace std;

struct Hora{

	int hh;
	int mm;

};

struct Turista{

	string id;
	string nomsapel[4];
	int nacionalidad; //Codigo nacionalidad
	Hora hora;
	

};


class GrupoTuristas{

	private:
		Turista *turistas; //Vector dinamico con los turistas del grupo
		int nTuristas;//numero de turistas del grupo

	public:


		//CONSTRUCTOR
		GrupoTuristas(int nTuristas);
		//DESTRUCTOR
		~GrupoTuristas();

		int getNTuristas();

		void inicializaVector();
		void mostrarVector();
		void setHora(int pos , Hora h);

		GrupoTuristas eliminarReserva(Hora h);

		GrupoTuristas redistribuirReserva(Hora h , GrupoTuristas &originales);
		
		

};

