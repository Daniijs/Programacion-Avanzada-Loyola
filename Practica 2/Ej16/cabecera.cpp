/*
 --------------------------------------------------
 Ejercicio: 16
 Daniel Jiménez Soler
Ejercicio 16. Dado un entero, obtener una lista de sus divisores primos (se puede implementar una funci´on que determine si un n´ umero es primo o no, y cuya complejidad sea lineal). Consideraremos el 1 como n´ umero primo.
 ----------------------------------------------------
*/

#include <iostream>
#include <list>
#include "cabecera.h"

bool esPrimo(int n){
	if(n==1||n==0) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	for(int i=3; i*i<=n;i+=2){
		if(n%i==0) return false;
	}
	return true;
}
void funcionNoFinal(int n, int i, list<int>& div){
    if(i >= n) return;
    if(n % i == 0 && esPrimo(i)) div.push_back(i);
    funcionNoFinal(n, i+1, div);
}

list<int> funcionNoFinal(int n){
	list<int> div;
	div.push_back(1);
	if (esPrimo(n)) {           
        div.push_back(n);
        return div;
    }
	funcionNoFinal(n, 2,div);
	return div;
	
}
void funcionFinal(int n, int i, list<int>& div){
    if(i >= n) return;
    if(n % i == 0 && esPrimo(i)) div.push_back(i);
    funcionFinal(n, i+1, div);
}

list<int> funcionFinal(int n){
	list<int> div;
	div.push_back(1);
	if (esPrimo(n)) {           
        div.push_back(n);
        return div;
    }
	funcionFinal(n, 2,div);
	return div;
}
list<int> funcionIterativa(int n){
	list<int> div;
	if(n<=0) return div;
	div.push_back(1);
	if(esPrimo(n)==true) {
		div.push_back(n);
			return div;
	}
	for(int i=2; i<n;i++){
		if(n%i==0&& esPrimo(i)) div.push_back(i);
	}
		return div;
	
}