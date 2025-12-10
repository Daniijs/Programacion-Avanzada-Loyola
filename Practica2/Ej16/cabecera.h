/*
 --------------------------------------------------
 Ejercicio: 16
 Daniel Jiménez Soler
Ejercicio 16. Dado un entero, obtener una lista de sus divisores primos (se puede implementar una funci´on que determine si un n´ umero es primo o no, y cuya complejidad sea lineal). Consideraremos el 1 como n´ umero primo.
 ----------------------------------------------------
*/

#include <iostream>
#include <list>
using namespace std;

list<int> funcionNoFinal(int n);
list<int> funcionFinal(int n);
list<int> funcionIterativa(int n);