/*
 --------------------------------------------------
 Ejercicio: 18
 Daniel Jiménez Soler
Ejercicio 18. Dado un n´umero entero, obtener la suma de los cuadrados de las cifras
pares, la cantidad de cifras impares, y el valor m´ınimo de sus cifras. Por
ejemplo: dado 5863, el resultado ser´ıa {100, 2, 3}.
 ----------------------------------------------------
*/

#include <iostream>
#include "cabecera.h"
using namespace std;


resultado funcionNoFinal(int n){
	if(n==0) return {0,0,0};
	if(n < 10) {
        int digito = n;
        if(n%2==0) return {digito*digito,0, digito};
        else return {0,1, digito};
    }
	resultado r=funcionNoFinal(n/10);
	int digito=n%10;
	if(digito%2==0) r.suma += (digito * digito);
	if(digito%2!=0) r.nImpares++;
	if(digito<r.minimo) r.minimo=digito;
	return r;
}
resultado funcionFinal(int n, resultado r){
	if(n==0) return r;
	int digito=n%10;
	if(digito%2==0) r.suma += (digito * digito);
	if(digito%2!=0) r.nImpares++;
	if(digito<r.minimo) r.minimo=digito;
	return funcionFinal(n/10, r);
}
resultado funcionFinal(int n){
	if(n==0) return {0,0,0};
	return funcionFinal(n,{0,0,9});
}
resultado funcionIterativa(int n){
	if(n==0) return {0,0,0};
	resultado r={0,0,9};
	while(n>0){
		int digito = n%10;
		if(digito%2==0) r.suma += (digito * digito);
		if(digito%2!=0) r.nImpares++;
		if(digito<r.minimo) r.minimo=digito;
		n/=10;
	}
	return r;
}