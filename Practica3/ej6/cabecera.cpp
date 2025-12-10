#include <iostream>
#include <string>
#include "cabecera.h"
using namespace std;

bool filtro(int** m, int x0, int x1, int y0, int y1){
	int n= x1-x0; //como es cuadrada solo hace falta comprobar un eje
	if(n==2) return m[x0][y0]<m[x0+1][y0+1];
	int midx=(x0+x1)/2;
	int midy=(y0+y1)/2;
	bool cuadrante1=filtro(m,x0,midx,y0,midy);
	bool cuadrante2=filtro(m,x0,midx,midy,y1);
	bool cuadrante3=filtro(m,midx,x1,y0,midy);
	bool cuadrante4=filtro(m,midx,x1,midy,y1);
	return cuadrante1&&cuadrante2&&cuadrante3&&cuadrante4 && m[x0][y0]<m[x1-1][y1-1];
}
bool filtro(int** m, int n){
	return filtro(m, 0, n, 0, n);
}
