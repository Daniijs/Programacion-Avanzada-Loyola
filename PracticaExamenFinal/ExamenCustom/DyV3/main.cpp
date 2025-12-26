#include <iostream>
#include "cabecera.h"
using namespace std;

void test(int *v, int n, int esperado, const string &nombre) {
    int res = buscaSolitario(v, n);
    if (res == esperado)
        cout << "[OK]     " << nombre << endl;
    else
        cout << "[FAILED] " << nombre 
             << " (esperado: " << esperado 
             << ", obtenido: " << res << ")" << endl;
}

int main() {
    cout << "--- TESTS buscaSolitario ---\n";

    // Caso 1: Solitario en medio
    int v1[] = {1, 1, 3, 3, 4, 5, 5, 7, 7}; // Esperado: 4
    
    // Caso 2: Solitario al principio
    int v2[] = {0, 2, 2, 3, 3, 4, 4};       // Esperado: 0
    
    // Caso 3: Solitario al final
    int v3[] = {1, 1, 2, 2, 3, 3, 9};       // Esperado: 9
    
    // Caso 4: Vector mínimo (1 elemento)
    int v4[] = {10};                        // Esperado: 10
    
    // Caso 5: Valores negativos
    int v5[] = {-5, -5, -2, -1, -1};        // Esperado: -2

    // Caso 6: Números grandes y saltos
    int v6[] = {10, 10, 20, 20, 30, 40, 40}; // Esperado: 30

    test(v1, 9, 4,  "Test 1: {1,1,3,3,4,5,5,7,7}");
    test(v2, 7, 0,  "Test 2: {0,2,2,3,3,4,4}");
    test(v3, 7, 9,  "Test 3: {1,1,2,2,3,3,9}");
    test(v4, 1, 10, "Test 4: {10}");
    test(v5, 5, -2, "Test 5: {-5,-5,-2,-1,-1}");
    test(v6, 7, 30, "Test 6: {10,10,20,20,30,40,40}");

    cout << "--- FIN TESTS ---\n";
    return 0;
}