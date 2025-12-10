/* 
⭐ Enunciado de ejercicio de Backtracking (nivel básico)
Ejercicio: Generar todas las combinaciones de tamaño K usando números del 1 al N

Escribe un programa en C++ que, usando backtracking, genere todas las combinaciones posibles de tamaño K formadas por números del 1 al N, sin repetir números y en orden creciente.

Entrada del programa

Se deben pedir al usuario:

Un número N (total de números disponibles)

Un número K (tamaño de la combinación)

Salida esperada

Imprimir todas las combinaciones de tamaño K.
*/ 


#include <iostream>
#include <vector>
#include "cabecera.h"
using namespace std;


int main() {
	
	int n, k;
	cout << "Introduce hasta que numero haras combinaciones" << endl;
	cin >> n;
	cout << "Introduce la cantidad de numeros en las combinaciones" << endl;
	cin >> k;

	Problema p (n,k);
	p.ejecutaBacktracking();
	for(int i=0;i<p.soluciones.size();i++){
		for(int j=0; j<p.soluciones[i].k;j++){
			cout<<p.soluciones[i].sol[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
