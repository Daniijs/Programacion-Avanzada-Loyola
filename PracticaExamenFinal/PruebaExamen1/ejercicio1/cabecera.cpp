#include<iostream>
#include<cmath>
#include"cabecera.h"

using namespace std;

//TODO apartado a) mario4
long int mario4(long int u, long int v, long int n){
    if(n==1) return u*v;
    long int a = u/(long int)(pow(10,n/2));
    long int b = u%(long int)(pow(10,n/2));
    long int c = v/(long int)(pow(10,n/2));
    long int d = v%(long int)(pow(10,n/2));
    long int ac = mario4(a,c,n/2);
    long int ad = mario4(a,d,n/2);
    long int bc = mario4(b,c,n/2);
    long int bd = mario4(b,d,n/2);
    return ac * (long int)(pow(10,n)) + (ad + bc) * (long int)(pow(10,n/2)) + bd;
}

//TODO apartado b) luigi3


long int luigi3(long int u, long int v, long int n){
    if(n==1) return u*v;
    long int a = u/(long int)(pow(10,n/2));
    long int b = u%(long int)(pow(10,n/2));
    long int c = v/(long int)(pow(10,n/2));
    long int d = v%(long int)(pow(10,n/2));
    long int ac = luigi3(a,c,n/2);
    long int bd = luigi3(b,d,n/2);
    long int ad_bc = (a-b)*(d-c) + ac + bd;
    return ac * (long int)(pow(10,n)) + ad_bc * (long int)(pow(10,n/2)) + bd;
}



