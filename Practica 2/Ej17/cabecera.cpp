/*
 --------------------------------------------------
 Ejercicio: 17
 Daniel Jiménez Soler
Ejercicio 17. Dado un n´umero, determinar el producto, el n´umero de cifras pares y la
suma de sus cifras. Por ejemplo: dado 5394, el resultado debe ser {540, 1,
21}.
 ----------------------------------------------------
*/

#include <iostream>
#include "cabecera.h"
using namespace std;

bool esPar(int n){
	return n%2==0;
}


resultado funcionNoFinal(int n){
	if(n==0) return {0,1,0};
	if(n < 10) {
        int digito = n;
        return {digito, (digito % 2 == 0), digito};
    }
	resultado r=funcionNoFinal(n/10);
	int digito=n%10;
	r.producto *=digito;
	if(digito%2==0) r.nPares++;
	r.suma +=digito;
	return r;
}
resultado funcionFinal(int n, resultado r){
	if(n==0) return r;
	int digito=n%10;
	r.producto *=digito;
	if(digito%2==0) r.nPares++;
	r.suma += digito;
	return funcionFinal(n/10, r);
}
resultado funcionFinal(int n){
	if(n==0) return {0,1,0};
	return funcionFinal(n,{1,0,0});
}
resultado funcionIterativa(int n){
	if(n==0) return {0,1,0};
	int producto=1;
	int pares=0;
	int suma=0;
	while(n>0){
		int digito= n%10;
		producto*=digito;
		if(digito%2==0) pares++;
		suma+=digito;
		n/=10;
	}
	return {producto, pares, suma};
	
}