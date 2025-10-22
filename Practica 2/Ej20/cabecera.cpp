/*
 --------------------------------------------------
 Ejercicio: 20
 Daniel Jiménez Soler
Ejercicio 20. Realizar la transformaci´on a iterativo de la siguiente funci´on recursiva definida
para n >= 0:
 ----------------------------------------------------
*/

#include<iostream>
#include "cabecera.h"
using namespace std;

long int funcionRecursiva(int n) {
    if(n < 3) return n * n;
    return 2 * funcionRecursiva(n - 1)
           - funcionRecursiva(n - 2)
           + funcionRecursiva(n - 3);
}
long int funcionIterativa(int n) {
    if(n < 3) return n * n;

    long int g0 = 0; // g(0)
    long int g1 = 1; // g(1)
    long int g2 = 4; // g(2)

    long int g;

    for(int i = 3; i <= n; i++) {
        g = 2 * g2 - g1 + g0;
        g0 = g1;
        g1 = g2;
        g2 = g;
    }

    return g2;
}
