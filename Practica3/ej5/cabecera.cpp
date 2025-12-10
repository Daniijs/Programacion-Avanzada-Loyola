#include <iostream>
#include <cmath>
#include "cabecera.h"
using namespace std;

float minimo(float p1, float p2, float p3, float p4){
	float minimo=p1;
	if(p2<minimo) minimo=p2;
	if(p3<minimo) minimo=p3;
	if(p4<minimo) minimo=p4;
	return minimo;
	
}


float minimoEnTerreno(float** m, int x0, int x1, int y0, int y1){
	int N=x1-x0; //al ser cuadrada vale con calcular la diferencia de uno de los ejes.
	if(N==1) return m[x0][y0];
	int midX=(x1+x0)/2;
	int midY=(y1+y0)/2;
	float cuadrante1=minimoEnTerreno(m,x0,midX,y0,midY);
	float cuadrante2=minimoEnTerreno(m,x0,midX,midY,y1);
	float cuadrante3=minimoEnTerreno(m,midX,x1,y0,midY);
	float cuadrante4=minimoEnTerreno(m,midX,x1,midY,y1);
	
	return minimo(cuadrante1, cuadrante2, cuadrante3, cuadrante4);
}


float minimoEnTerreno(float** m, int N){
	return minimoEnTerreno(m,0,N,0,N);
}

