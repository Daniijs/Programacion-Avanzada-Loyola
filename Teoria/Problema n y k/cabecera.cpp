/* 
⭐ Enunciado de ejercicio de Backtracking (nivel básico)
Ejercicio: Generar todas las combinaciones de tamaño K usando números del 1 al N

Escribe un programa en C++ que, usando backtracking, genere todas las combinaciones posibles de tamaño K formadas por números del 1 al N, sin repetir números y en orden creciente.

Entrada del programa

Se deben pedir al usuario:

Un número N (total de números disponibles)

Un número K (tamaño de la combinación)

Salida esperada

Imprimir todas las combinaciones de tamaño K.
*/ 


#include <iostream>
#include <vector>
#include "cabecera.h"
using namespace std;



//ESTADO

bool Estado :: esFinal(){
	return this->posicion == this->sol->k;
}
vector<int> Estado :: getAlternativas(){
	vector<int> alternativas;
	for(int i=1; i <= this->sol->n; i++){
		bool repetido=false;
		for(int j=0; j<this->posicion; j++){
			if(i == this->sol->sol[j]){
				repetido=true;
				break;
			}
		}
		if(repetido) continue;
		if(this->posicion==0) alternativas.push_back(i);
		else if(i > this->sol->sol[posicion-1]) alternativas.push_back(i);
	}
	return alternativas;
	
}
void Estado :: avanza(int valor){
	this->sol->sol[this->posicion] = valor;
	this->posicion++;
}
void Estado :: retrocede(){
	this->posicion--;
	this->sol->sol[this->posicion]=0;
}

//PROBLEMA
void Problema :: ejecutaBacktracking(){
	Solucion sol(n,k);
	Estado e(&sol);
	bt(&e);
}
void Problema :: bt(Estado *e){
	if(e->esFinal()){
		this->actualizaMejorSolucion(e);
		return;
	}
	else{
		vector<int> alts = e->getAlternativas();
		for(int i=0; i<alts.size(); i++){
			e->avanza(alts[i]);
			this->bt(e);
			e->retrocede();
		}
	}
}
void Problema :: actualizaMejorSolucion(Estado *e){
	this->soluciones.push_back(*(e->sol));
}
