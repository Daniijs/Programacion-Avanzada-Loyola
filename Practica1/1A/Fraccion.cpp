#include "cabecera.h"


//necesaria para el simplify()
int mcd(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
};

void Fraccion::simplificar(){
	int divisor = mcd(numerador,denominador);
	numerador = numerador/divisor;
	denominador = denominador/divisor;
};

Fraccion Fraccion :: operator+ (const Fraccion& otra) const{
	int num=numerador*otra.denominador + otra.numerador*denominador;
	int den=denominador*otra.denominador;
	Fraccion f(num,den);
	f.simplificar();
	return f;
};

ostream& operator <<(ostream& os, const Fraccion& f){
	return os<<f.numerador<<"/"<<f.denominador;
};

