#include <iostream>
#include <cmath>

using namespace std;

template <class T>
class Vector3D {
	private:
	T i;
	T j;
	T k;
	public:
	Vector3D(T i=0, T j=0, T k=0){
		this->i=i;
		this->j=j;
		this->k=k;
	}
	T getI(){
		return i;
	}
	T getJ(){
		return j;
	}
	T getK(){
		return k;
	}
	void setI(T i){
		this->i=i;
	}
	void setJ(T j){
		this->j=j;
	}
	void setK(T k){
		this->k=k;
	}
	
	T modulo();
	T productoEscalar(Vector3D<T> otro);
	
};
#include "Vector3D.cpp"