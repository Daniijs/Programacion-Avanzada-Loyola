/*
 --------------------------------------------------
 Ejercicio: 3
 Daniel Jiménez Soler
 Ejercicio 3. Dada una cadena de caracteres, contar cuántas vocales contiene.
 ----------------------------------------------------
*/

#include <iostream>
#include "cabecera.h"
using namespace std;

int main() {
	string cad="Hola Mundo";
	cout<<"Funcion no final: "<<funcionNF(cad)<<endl;

	cout<<"Funcion final: "<<funcionF(cad)<<endl;
	cout<<"Funcion iterativa: "<<funcionIterativa(cad)<<endl;
	return 0;
}
