#include <iostream>
#include <string>

using namespace std;


class Tecnico {
	private:
		string nombre;
		int carga;
	public:
		//constructor
		Tecnico(string nombre="", int carga=0){
			this->nombre=nombre;
			this->carga=carga;
		}
		
		//observadores
		string getNombre(){return nombre;}
		int getCarga(){return carga;}
		
		//modificadores
		void setNombre(string nombre){this->nombre=nombre;}
		void setCarga(int carga){this->carga=carga;}
		
		//operadores
		Tecnico operator=(const Tecnico& t){
			setNombre(t.nombre);
			setCarga(t.carga);
			return *this;
		}
		void show();
};

int mismaCarga(Tecnico* v, int n);
