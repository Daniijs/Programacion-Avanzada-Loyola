#include <iostream>
#include "cabecera.h"
using namespace std;

void test(int *ref, int *v, int n, int esperado, const string &nombre) {
    int r = obtenerPrimerIgual(ref, v, n);
    if (r == esperado)
        cout << "[OK]     " << nombre << endl;
    else
        cout << "[FAILED] " << nombre 
             << " (esperado: " << esperado 
             << ", obtenido: " << r << ")" << endl;
}

int main() {
    const int n = 5;
    int ref[n] = {1, 2, 3, 4, 5};

    int v1[n] = {1, 2, 3, 4, 5};  // Esperado: 0
    int v2[n] = {0, 2, 3, 4, 5};  // Esperado: 1
    int v3[n] = {0, 0, 3, 4, 5};  // Esperado: 2
    int v4[n] = {0, 0, 0, 4, 5};  // Esperado: 3
    int v5[n] = {0, 0, 0, 0, 5};  // Esperado: 4
    int v6[n] = {0, 0, 0, 0, 0};  // Esperado: -1

    cout << "--- TESTS obtenerPrimerIgual ---\n";
    test(ref, v1, n, 0, "Test 1: Todos iguales");
    test(ref, v2, n, 1, "Test 2: Coincide desde 1");
    test(ref, v3, n, 2, "Test 3: Coincide desde 2");
    test(ref, v4, n, 3, "Test 4: Coincide desde 3");
    test(ref, v5, n, 4, "Test 5: Coincide desde 4");
    test(ref, v6, n, -1, "Test 6: Ninguna coincidencia");
    cout << "--- FIN TESTS ---\n";

    return 0;
}

