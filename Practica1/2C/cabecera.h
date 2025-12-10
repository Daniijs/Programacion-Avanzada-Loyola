#include <iostream>
#include <cmath>

using namespace std;

template <class T>
class Punto4D {
	private:
	T x;
	T y;
	T z;
	T t;
	public:
	Punto4D<T>(T x=0, T y=0, T z=0,T t=0){
		this->x=x;
		this->y=y;
		this->z=z;
		this->t=t;
	}
	T getX(){
		return x;
	}
	T getY(){
		return y;
	}
	T getZ(){
		return z;
	}
	T getT() {
		return t;
	}
	void setX(T x){
		this->x=x;
	}
	void setY(T y){
		this->y=y;
	}
	void setZ(T z){
		this->z=z;
	}
	void setT(T t){
		this->t=t;
	}
	
	T modulo();
	
	bool operator==(const Punto4D<T>& otro);
};
template <class T>

ostream& operator<<(ostream& os, const Punto4D<T> & p);

#include "Punto4D.cpp"
