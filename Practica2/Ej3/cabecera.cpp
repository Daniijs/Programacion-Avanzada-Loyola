/*
 --------------------------------------------------
 Ejercicio: 3
 Daniel Jiménez Soler
 Ejercicio 3. Dada una cadena de caracteres, contar cuántas vocales contiene.
 ----------------------------------------------------
*/


#include <iostream>
#include "cabecera.h"

using namespace std;
bool esVocal(char c){
	return c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o'||c=='O'||c=='u'||c=='U';
}


int funcionNFaux(const string& cad, int i){
	if(i== cad.length()) return 0;
	int suma = esVocal(cad[i]);
	return suma + funcionNFaux(cad, i+1);
}
int funcionNF(const string& cad){
	return funcionNFaux(cad, 0);
}
int funcionFaux(const string& cad, int i, int acc){
	if(i==cad.length()) return acc;
	else return funcionFaux(cad, i+1, acc+esVocal(cad[i]));
}
int funcionF(const string& cad){
	return funcionFaux(cad, 0, 0);
}

int  funcionIterativa(const string& cad){
	int acumulador=0;
	for(int i=0; i<cad.length();i++){
		acumulador += esVocal(cad[i]);
	}
	return acumulador;
}
