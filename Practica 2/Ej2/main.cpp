/*
 --------------------------------------------------
 Ejercicio: 2
 Daniel Jiménez Soler
 Ejercicio 2. Dado un array de float, suma el cuadrado de la raíz cúbica de sus elementos.
 ----------------------------------------------------
*/


#include <iostream>
#include "cabecera.h"
#include <cmath>
using namespace std;

int main() {
	float v1[4]={1,2,3,4};
	cout<<"Funcion no final: "<<funcionNoFinal(v1,4)<<endl;
	
	cout<<"Funcion final: "<<funcionFinal(v1,4)<<endl;
	
	cout<<"Funcion iterativa: "<<funcionIterativa(v1,4)<<endl;
	return 0;
}
