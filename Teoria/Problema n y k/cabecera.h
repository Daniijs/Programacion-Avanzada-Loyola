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

#ifndef CABECERA_H
#define CABECERA_H
#include <iostream>
#include <vector>
using namespace std;



class Objeto{
	public:
	int valor;
	
	Objeto(int valor=0){
		this->valor=valor;
	}
};

class Solucion{
	public: 
	vector<int> sol;
	int n, k;
	Solucion(int n, int k){
		this->n=n;
		this->k=k;
		this->sol = vector<int>(k);
	}
	
};

class Estado{
	public:
	Solucion *sol;
	int posicion;
	
	
	Estado(Solucion *sol){
		this->sol=sol;
		this->posicion=0;
	}
	bool esFinal();
	vector<int> getAlternativas();
	void avanza(int valor);
	void retrocede();
};

class Problema{
	public: 
	int n,k;
	vector<Solucion> soluciones;
	
	
	Problema(int n, int k){
		this->n = n;
		this->k = k;
	}
	
	void ejecutaBacktracking();
	void bt(Estado *e);
	void actualizaMejorSolucion(Estado *e);
};





















#endif
