/*
Se te proporciona un array de enteros v de tamaño n que ha sido ordenado ascendentemente. 
En este array, todos los elementos aparecen exactamente dos veces (y de forma consecutiva), 
excepto un único elemento que aparece solo una vez.
*/


#include "cabecera.h"

int buscaSolitario(int* v, int x0, int x1,int candidato){
    if(x1-x0==2){
        if(x0+1 != x0){
            if(x0+1 == candidato){
                candidato = x0;
            }
            if(x0 == candidato){
                candidato = x0+1;
            }
        }
    }
    
    int mid = (x0+x1)/2;
    int izq = buscaSolitario(v, x0, mid, candidato);
    int der = buscaSolitario(v, mid, x1, candidato);

    return candidato;

}
int buscaSolitario(int* v, int n){
    return buscaSolitario(v,0,n,v[0]);
}