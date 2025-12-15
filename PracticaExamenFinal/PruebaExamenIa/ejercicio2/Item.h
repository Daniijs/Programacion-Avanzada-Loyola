#include <iostream>
#include <string>

using namespace std;


class Item {

    private:
        int id;
        string nombre;
        float peso;
        float valor;

    public:
        float getPeso(){
            return peso;
        }
        float getValor(){
            return valor;
        }
        float setPeso(float peso){
            this->peso=peso;
        }
        float setValor(float valor){
            this->valor=valor;
        }
        float getRatio(){
            return valor/peso;
        }
        void print(){
            cout<<"ID: "<<id<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Peso: "<<peso<<endl;
            cout<<"Valor: "<<valor<<endl;
            cout<<"Ratio: "<<getRatio()<<endl;
        }   
}