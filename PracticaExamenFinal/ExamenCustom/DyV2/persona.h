#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona {
    private:
        string nombre;
        int edad;

    public:
        Persona(string nombre="", int edad=0){
            this->nombre=nombre;
            this->edad=edad;
        }
        string getNombre() const {return nombre;}
        int getEdad() const {return edad;}

        void setNombre(string n){nombre=n;}
        void setEdad(int e){edad=e;}
        bool operator>(const Persona& p) const {
            return getEdad() > p.getEdad();
        }
        bool operator<(const Persona& p) const{
            return getEdad()< p.getEdad();
        }
        Persona& operator=(const Persona& p){
            setNombre(p.getNombre());
            setEdad(p.getEdad());
            return *this;
        }
        void mostrar(){
            cout<<"Nombre: "<<getNombre()<<" Edad: "<<getEdad()<<endl;
        }
};

struct par{
    Persona min;
    Persona max;
};

par minimoMaximo(Persona* v, int n);
void mostrarPersonas(Persona* v, int n);



#endif