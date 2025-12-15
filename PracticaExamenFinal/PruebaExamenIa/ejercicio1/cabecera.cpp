#include "cabecera.h"


int getNinversiones(int* v, int x0, int x1){
    if(x1-x0==2){
        if(v[x0]>v[x0+1]) return 1;
        else return 0;
    }
    int mid=(x0+x1)/2;
    int mitad1=getNinversiones(v,x0,mid);
    int mitad2=getNinversiones(v,mid,x1);
    return mitad1+mitad2;
}

int getNinversiones(int* v, int n){
    return getNinversiones(v,0,n);
}
