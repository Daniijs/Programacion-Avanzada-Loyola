#include <iostream>
#include <cmath>

using namespace std;

template <class T>
T Punto4D<T>::modulo(){
	return sqrt(pow(x,2)+pow(y,2)+pow(z,2)+pow(t,2));
}

template <class T>
bool Punto4D<T>::operator==(Punto4D<T>& otro){
	if(x==otro.x && y==otro.y && z==otro.z && t==otro.t){
		return true;
	}
	else { return false;}
}

template <class T>
ostream& operator<<(ostream& os, Punto4D<T> & p){
	return os<<"["<<p.x<<" , "<<p.y<<" , "<<p.z<<" , "<<p.t<<"]";
}


