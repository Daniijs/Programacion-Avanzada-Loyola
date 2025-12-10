/*
 --------------------------------------------------
 Ejercicio: 9
 Daniel Jiménez Soler
Ejercicio 9. Dado un array, decidir si todos los elementos son numeros perfectos (se ´ puede hacer uso de una funcion auxiliar que compruebe si un elemento es ´ un cuadrado perfecto o no, y cuya complejidad sea lineal).
 ----------------------------------------------------
*/


#include <iostream>
#include <list>
#include "cabecera.h"

using namespace std;

//funcionauxiliar
bool esPerfecto(int n){
	if(n<0) return false;
	list<int> divisores={1};
	for(int i=2; i<=n/2; i++){
		if(n%i==0) divisores.push_back(i);
	}
	int aux=0;
	for(list<int> :: iterator t=divisores.begin(); t!=divisores.end();t++){
		aux+=*t;
	}
	return aux==n;
	
}

bool funcionNoFinal(int *v, int n){
	if(n==0) return true;
	else return esPerfecto(*v) and funcionNoFinal(v+1, n-1);
}
bool funcionFinalaux(int *v, int n, bool a){
	if(n==0) return a;
	else return funcionFinalaux(v+1, n-1, a and esPerfecto(*v));
	
}
bool funcionFinal(int *v, int n){
	return funcionFinalaux(v, n, true);
	
}

bool funcionIterativa(int *v, int n){
	if(n==0) return true;
	for(int i=0; i<n;i++){
		if(esPerfecto(v[i]) == false) return false;
	}
	return true;
}