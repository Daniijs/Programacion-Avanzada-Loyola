#include <iostream>
#include <cmath>

using namespace std;

template <class T>
T Vector3D<T> :: modulo(){
	return sqrt(pow(i,2)+pow(j,2)+pow(k,2));
}
template <class T>
T Vector3D<T> :: productoEscalar(Vector3D<T> otro){
	T producto = getI() * otro.getI() + getJ() * otro.getJ() + getK() * otro.getK();
	return producto;
}

	
	
