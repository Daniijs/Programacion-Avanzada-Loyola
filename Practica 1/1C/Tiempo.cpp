#include <iostream>
#include "cabecera.h"

using namespace std;

void Tiempo::normalizar(){
	while(minutos>=60){
		minutos-=60;
		horas++;
	}
};

Tiempo Tiempo::operator+(const Tiempo& t) const{
	int h=horas+t.horas;
	int m=minutos+t.minutos;
	Tiempo ti(h,m);
	ti.normalizar();
	return ti;
};

Tiempo Tiempo::operator-(const Tiempo& t) const{
	int h=horas-t.horas;
	int m=minutos-t.minutos;
	Tiempo ti(h,m);
	ti.normalizar();
	return ti;
};

bool   Tiempo::operator==(const Tiempo& t) const{
	if(horas==t.horas&&minutos==t.minutos){
		return true;
	}
	else {
		return false;
	}
};

ostream& operator<<(ostream& os, const Tiempo& t){
	return os<<t.horas<<":"<<t.minutos;
};
