/*
 --------------------------------------------------
 Ejercicio: 17
 Daniel Jiménez Soler
Ejercicio 17. Dado un n´umero, determinar el producto, el n´umero de cifras pares y la
suma de sus cifras. Por ejemplo: dado 5394, el resultado debe ser {540, 1,
21}.
 ----------------------------------------------------
*/

#include <iostream>
using namespace std;
struct resultado{
	int producto;
	int nPares;
	int suma;
};
resultado funcionNoFinal(int n);
resultado funcionFinal(int n);
resultado funcionIterativa(int n);
