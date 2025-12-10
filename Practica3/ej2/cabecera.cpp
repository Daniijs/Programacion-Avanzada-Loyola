#include <iostream>
#include "cabecera.h"
using namespace std;


int obtenerPrimerIgual(int* ref, int* v, int n){
	int high=n-1;
	int low=0;
	int mid;
	int aux=-1;
	bool firstequal=false;
	while(high>=low){
		mid=(high+low)/2;
		if(ref[mid]==v[mid]){
			aux=mid;
			high=mid-1;
			if(firstequal==false){
				firstequal=true;
			}
		}
		if(ref[mid]!=v[mid] && firstequal == false) low=mid+1;
		if(ref[mid]!=v[mid] && firstequal == true) break;
	}
	return aux;
}

