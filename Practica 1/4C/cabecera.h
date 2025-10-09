#include <iostream>
#include<map>
#include<list>
#include<string>
using namespace std;

void leerMapa(map<string,int>& personas);
void mostrarMapa(const map<string,int>& personas);
void eliminarPorEdad(map<string,int>& personas, int edadMinima);
map<string,int> primosMap(map<string,int>& personas);
list<string> obtenerNombresEdadMaxima(map<string,int>& personas);
map<int,list<string>> invertidoMap(const map<string, int>& personas);
