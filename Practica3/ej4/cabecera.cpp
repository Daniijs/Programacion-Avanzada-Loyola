#include <iostream>
#include <cassert>
#include "cabecera.h"

using namespace std;

int productoMatriz(int** m, int lowfilas, int highfilas, int lowcolumnas, int highcolumnas){
	int producto=1;
		for(int i=lowfilas; i<highfilas; i++){
			for(int j=lowcolumnas; j<highcolumnas; j++){
					producto *= m[i][j];
			}
		}
		
		
	return producto;
}

int equiProducto(int** m, int lowfilas, int highfilas, int lowcolumnas, int highcolumnas){
	int N=highfilas-lowfilas; // al ser cuadrada con esto sirve, no hace falta hacer tambien el de columnas porque tiene que dar lo mismo
	if(N==2){
		return m[lowfilas][lowcolumnas] * m[lowfilas+1][lowcolumnas+1] * m[lowfilas][lowcolumnas+1]*m[lowfilas+1][lowcolumnas];
	}
	int midfilas=(highfilas+lowfilas)/2;
	int midcolumnas=(highcolumnas+lowcolumnas)/2;
	int producto1=productoMatriz(m,lowfilas,midfilas,lowcolumnas,midcolumnas);
	int producto2=productoMatriz(m,lowfilas,midfilas,midcolumnas,highcolumnas);
	int producto3=productoMatriz(m,midfilas,highfilas,lowcolumnas,midcolumnas);
	int producto4=productoMatriz(m,midfilas,highfilas,midcolumnas,highcolumnas);
	if(producto1!=producto2||producto2!=producto3||producto3!=producto4) return -1;
	int cuadrante1=equiProducto(m,lowfilas,midfilas,lowcolumnas,midcolumnas);
	int cuadrante2=equiProducto(m,lowfilas,midfilas,midcolumnas,highcolumnas);
	int cuadrante3=equiProducto(m,midfilas,highfilas,lowcolumnas,midcolumnas);
	int cuadrante4=equiProducto(m,midfilas,highfilas,midcolumnas,highcolumnas);
	if(cuadrante1==-1 || cuadrante2==-1 || cuadrante3==-1 || cuadrante4==-1) return -1;
	return producto1*producto2*producto3*producto4;
}

int equiProducto(int** m, int N){
	return equiProducto(m,0, N, 0, N);
}
