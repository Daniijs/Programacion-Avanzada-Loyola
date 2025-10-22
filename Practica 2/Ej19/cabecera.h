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
using namespace std;

struct resultado {
    int S;
    int R;
};

resultado divisionNF(int A, int B);
resultado divisionF(int A, int B);
resultado divisionI(int A, int B);
