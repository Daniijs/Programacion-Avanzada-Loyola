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

int main(){
	string s = "Antonio";
	cout<<funcionNoFinal(s);
	cout<<funcionFinal(s);
	cout<<funcionIterativa(s);
	return 0;
}