/*
 --------------------------------------------------
 Ejercicio: 2
 Daniel Jiménez Soler
 Ejercicio 2. Dado un array de float, suma el cuadrado de la raíz cúbica de sus elementos.
 ----------------------------------------------------
*/

#include <iostream>
#include "cabecera.h"
#include <cmath>

float funcionNoFinal(float *v, int n){
	if (n==0) return 0;
	else return pow( cbrt(*v), 2) + funcionNoFinal(v+1, n-1);
}
float funcionFinalaux(float *v, int n, float acc){
	if (n==0) return acc;
	else return funcionFinalaux(v+1, n-1, acc + pow(cbrt(*v),2));
}
float funcionFinal(float *v, int n){
	return funcionFinalaux(v,n,0);
}

float funcionIterativa(float *v, int n){
	float aux=0;
	for(int i=0; i<n;i++){
		aux+=pow( cbrt(v[i]), 2);
	}
	return aux;
}
