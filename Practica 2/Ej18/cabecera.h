/*
 --------------------------------------------------
 Ejercicio: 18
 Daniel Jiménez Soler
Ejercicio 18. Dado un n´umero entero, obtener la suma de los cuadrados de las cifras
pares, la cantidad de cifras impares, y el valor m´ınimo de sus cifras. Por
ejemplo: dado 5863, el resultado ser´ıa {100, 2, 3}.
 ----------------------------------------------------
*/


#include <iostream>
using namespace std;

struct resultado{
	int suma;
	int nImpares;
	int minimo;
};
resultado funcionNoFinal(int n);
resultado funcionFinal(int n);
resultado funcionIterativa(int n);