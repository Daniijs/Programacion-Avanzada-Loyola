/*
 --------------------------------------------------
 Ejercicio: 1
 Daniel Jiménez Soler
 Ejercicio 1. Dado un array de enteros, devolver el producto de todos sus elementos. Si el array está vacío se devuelve 1 por conveniencia.
 ----------------------------------------------------
*/


#include <iostream>
#include "cabecera.h"

using namespace std;

int main() {
	int v1[4]={2,3,4,5};
	cout<<"Funcion no final: "<<funcionNoFinal(v1,4)<<endl;
	
	cout<<"Funcion final: "<<funcionFinal(v1,4)<<endl;
	
	cout<<"Funcion iterativa: "<<funcionIterativa(v1,4)<<endl;
	return 0;
}