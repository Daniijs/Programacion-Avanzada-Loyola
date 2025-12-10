#include <iostream>
#include "cabecera.h"
using namespace std;

void test(int *v, int n, int esperado, const string &nombre) {
    int res = buscaP(v, n);
    if (res == esperado)
        cout << "[OK]     " << nombre << endl;
    else
        cout << "[FAILED] " << nombre 
             << " (esperado: " << esperado 
             << ", obtenido: " << res << ")" << endl;
}
int main() {
    cout << "--- TESTS buscaP ---\n";

    int v1[] = {1, 2, 3, 4, 5};           // Esperado: -1
    int v2[] = {0, 2, 3, 4, 5};           // Esperado: 0
    int v3[] = {-1, 1, 3, 4, 5};          // Esperado: 1
    int v4[] = {-1, 0, 2, 4, 5};          // Esperado: 2
    int v5[] = {-1, 0, 1, 3, 5};          // Esperado: 3
    int v6[] = {-1, 0, 1, 2, 4};          // Esperado: 4

    test(v1, 5, -1, "Test 1: {1,2,3,4,5}");
    test(v2, 5,  0, "Test 2: {0,2,3,4,5}");
    test(v3, 5,  1, "Test 3: {-1,1,3,4,5}");
    test(v4, 5,  2, "Test 4: {-1,0,2,4,5}");
    test(v5, 5,  3, "Test 5: {-1,0,1,3,5}");
    test(v6, 5,  4, "Test 6: {-1,0,1,2,4}");

    cout << "--- FIN TESTS ---\n";
    return 0;
}

