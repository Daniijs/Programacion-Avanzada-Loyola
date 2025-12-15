/*
Contexto: Eres el Operador de la nave Nebuchadnezzar. Estás analizando el código fuente
de Matrix en busca de “glitches” o anomalías. El código se visualiza como una secuencia de n
números enteros distintos que representan firmas de energía.
Una secuencia ordenada de menor a mayor representa estabilidad perfecta. Sin embargo,
cada vez que un número mayor aparece antes que un número menor en la secuencia (es decir,
una pareja de índices (i, j) tal que i < j pero A[i] > A[j]), se considera una inversión o fallo
de realidad.
Cuantas más inversiones tenga la secuencia, más inestable es el sector y más urgente es enviar
a Neo.
Problema: Diseña un algoritmo eficiente basado en Divide y Vencerás que calcule el
número total de inversiones en una secuencia de entrada de tamaño n.
Se pide:
1. Diseño: Explica detalladamente cómo divides el problema, cómo resuelves los casos base
y, crucialmente, cómo combinas las soluciones parciales para contar las inversiones que
cruzan la mitad izquierda y derecha (pista: piensa en una modificación de MergeSort).
2. Recurrencia y Complejidad: Plantea la ecuación de recurrencia T (n) de tu algoritmo.
Resuélvela usando el Teorema Maestro (o el método del árbol) para obtener la complejidad
asintótica O(·). Compara esta complejidad con la de un enfoque de fuerza bruta.
3. Ejemplo: Traza la ejecución brevemente para el vector de entrada: [2, 4, 1, 3, 5].
*/


#include <iostream>
using namespace std;


int getNinversiones(int* v, int n);