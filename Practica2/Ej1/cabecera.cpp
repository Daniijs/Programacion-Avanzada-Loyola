/*
 --------------------------------------------------
 Ejercicio: 1
 Daniel Jiménez Soler
 Ejercicio 1. Dado un array de enteros, devolver el producto de todos sus elementos. Si el array está vacío se devuelve 1 por conveniencia.
 ----------------------------------------------------
*/




#include <iostream>
#include "cabecera.h"

int funcionNoFinal(int *v, int n){
	if(n==0) return 1;
	else return (*v) * funcionNoFinal(v+1, n-1);
}	
funcionFinalaux(int *v,int n, int acc){
	if(n==0) return acc;
	else return funcionFinalaux(v+1, n-1, (*v)*acc);
}
int funcionFinal(int *v, int n){
	return funcionFinalaux(v, n, 1);
}
int funcionIterativa(int *v, int n){
	int aux=1;
	for(int i=0; i<n;i++){
		aux*=v[i];
	}
	return aux;
}
