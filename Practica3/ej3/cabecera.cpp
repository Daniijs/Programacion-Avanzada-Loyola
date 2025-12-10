#include <iostream>
#include <string>
#include "cabecera.h"

using namespace std;


void Tecnico :: show(){
	cout<<"("<<nombre<<", "<<carga<<")";
}
int sumaCargas(Tecnico* v, int ini, int fin) {
    int suma = 0;
    for (int i = ini; i < fin; ++i)
        suma += v[i].getCarga();
    return suma;
}

int mismaCarga(Tecnico* v, int low, int high) {
    int n = high - low;

    if (n == 2)
        return v[low].getCarga() + v[low + 1].getCarga();

    if (n % 2 != 0)
        return -1;

    int mitad = low + n / 2;

    int suma1 = sumaCargas(v, low, mitad);
    int suma2 = sumaCargas(v, mitad, high);

    if (suma1 != suma2)
        return -1;

    int izq = mismaCarga(v, low, mitad);
    int der = mismaCarga(v, mitad, high);

    if (izq == -1 || der == -1)
        return -1;

    return suma1 + suma2;
}

int mismaCarga(Tecnico* v, int n) {
    return mismaCarga(v, 0, n);
}
