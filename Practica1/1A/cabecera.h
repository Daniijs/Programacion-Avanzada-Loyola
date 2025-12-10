#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

class Fraccion {
	private:
	int numerador;
	int denominador;
	
	public:
	Fraccion(int numerador = 0, int denominador = 1){
		this->numerador=numerador;
		if(denominador!=0){
			this->denominador = denominador;
		}
		else {
			cout<<"Error: denominador no puede contener 0"<<endl;
			exit(1);
		}
	}
	int getNumerador() const{
		return numerador;
		}
	int getDenominador() const {
		return denominador;
		}
	
	void setNumerador(int numerador){
		this->numerador=numerador;
		}
	void setDenominador(int denominador){
		if(denominador!=0){
			this->denominador = denominador;
		}
		else {
			cout<<"Error: denominador no puede contener 0"<<endl;
			exit(1);
		}
	}
	
	void simplificar();	
	
	Fraccion operator+ (const Fraccion& otra) const;
	friend ostream& operator<<(ostream& os, const Fraccion& f);
};
