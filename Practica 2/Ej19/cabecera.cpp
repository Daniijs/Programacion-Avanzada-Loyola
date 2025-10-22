/*
 --------------------------------------------------
 Ejercicio: 19
 Daniel Jiménez Soler
Ejercicio 19. Realice la Divisi´on por restas sucesivas. Si se desea realizar A/B y obtener
el resultado S y el resto R, el proceso consistir´a en restar a A la cantidad
B hasta que el resultado de la resta sea menor que el propio B. S ser´a el
n´umero de operaciones de resta realizadas y R el resultado de la ´ ultima
resta.
 ----------------------------------------------------
*/

#include <iostream>
#include "cabecera.h"
using namespace std;

resultado divisionNF(int A, int B){
    if(A < B) return {0, A};
    resultado r = divisionNF(A - B, B);
    r.S++;
    return r;
}

resultado divisionF(int A, int B, resultado r){
    if(A < B){
        r.R = A;
        return r;
    }
    r.S++;
    return divisionF(A - B, B, r);
}

resultado divisionF(int A, int B){
    resultado r = {0, 0};
    return divisionF(A, B, r);
}

resultado divisionI(int A, int B){
    resultado r = {0, 0};
    while(A >= B){
        A -= B;
        r.S++;
    }
    r.R = A;
    return r;
}
