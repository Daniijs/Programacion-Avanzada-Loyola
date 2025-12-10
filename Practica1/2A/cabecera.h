#include <iostream>
using namespace std;

template <class T>
class Punto2D {
	private:
	T x;
	T y;
	public:
	Punto2D(T x=0.0, T y=0.0){
		this->x=x;
		this->y=y;
	}
	
	T getX(){
		return x;
	}
	T getY(){
		return y;
	}
	
	void setX(T x){
		this->x=x;
	}
	void setY(T y){
		this->y=y;
	}
	
	T distancia(){
		return sqrt(pow(x,2)+pow(y,2));
	}
	

};