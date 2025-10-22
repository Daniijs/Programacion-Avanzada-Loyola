/*
 --------------------------------------------------
 Ejercicio: 15
 Daniel Jiménez Soler
Ejercicio 15. Encontrar el espejo de la parte derecha de una cadena de caracteres. Por ejemplo, dada la palabra “antonio”, el resultado ser´ ıa “oinonio”.
 ----------------------------------------------------
*/




#include <iostream>
#include <string>
#include "cabecera.h"

using namespace std;

void funcionNoFinal(string& entrada, int i, int n){
	if(i>=n) return;
	
	funcionNoFinal(entrada, i+1, n-1);
	
	entrada[i]=entrada[n];
	
}

string funcionNoFinal(string& entrada){
	if (entrada.size()<=1) return entrada;
	funcionNoFinal(entrada, 0, entrada.size()-1);
	return entrada;
}

void funcionFinal(string& entrada,int i, int n){
	if(i>= n) return;
	entrada[i] = entrada[n];
	funcionFinal(entrada, i+1, n-1);
}
string funcionFinal(string& entrada){
	if(entrada.size() <= 1) return entrada;
	funcionFinal(entrada, 0, entrada.size()-1);
	return entrada;
}

string funcionIterativa(string& entrada){
	int n= entrada.size() - 1;
	int i= 0;
	while(i<n){
		entrada[i]=entrada[n];
		i++;
		n--;
	}
	return entrada;
}