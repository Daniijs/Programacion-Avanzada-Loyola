#include <iostream>
#include "cabecera.h"
using namespace std;

int buscaP(int* v, int n){
	int high=n-1;
	int low=0;
	int mid;
	while(high>=low){
		mid=(high+low)/2;
		if(v[mid]==mid) return mid;
		if(v[mid]>mid) high=mid-1;
		else low=mid+1;
	}
	return -1;
}
