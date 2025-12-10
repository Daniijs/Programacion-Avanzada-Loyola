#pragma once
#include <string>
#include <stdexcept>
using namespace std;

class Pelicula {
private:
    string titulo;
    string director;
    string codigoIMDB;
    int duracion;
    double presupuesto;

public:
    Pelicula(const string& datos);

  
    string getTitulo() const { return titulo; }
    string getDirector() const { return director; }
    string getCodigoIMDB() const { return codigoIMDB; }
    int getDuracion() const { return duracion; }
    double getPresupuesto() const { return presupuesto; }

    void setDuracion(int d) {
        if (d <= 0) throw invalid_argument("Duración inválida");
        duracion = d;
    }
    void setPresupuesto(double p) { presupuesto = p; }

   
    bool operator<(const Pelicula& otra) const {
        if (titulo != otra.titulo)
            return titulo < otra.titulo;
        return director > otra.director;
    }
};
