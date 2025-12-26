#include "persona.h"

par minimoMaximo(Persona* v, int x0,int x1){
    if(x1-x0==1){
        if(v[x0]<v[x0+1]) return par{v[x0],v[x0+1]};
        else return par{v[x0+1],v[x0]};
    }
    int mitad=(x0+x1)/2;
    par sol;
    par izq = minimoMaximo(v,x0,mitad);
    par der = minimoMaximo(v,mitad,x1);
    if(izq.min < der.min) sol.min = izq.min;
    else sol.min = der.min;
    if (izq.max > der.max) sol.max = izq.max;
    else sol.max = der.max;
    
    return sol;
}
par minimoMaximo(Persona* v, int n){
    return minimoMaximo(v,0,n-1);
}
void mostrarPersonas(Persona* v, int n){
    for(int i=0; i<n; i++){
        v[i].mostrar();
    }
}
