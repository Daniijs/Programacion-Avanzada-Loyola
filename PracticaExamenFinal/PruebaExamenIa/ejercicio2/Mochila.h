#include <iostream>
#include <vector>
#include "item.h"



class Mochila {
    private:
        vector<Item> items;
        float pesoActual;
        float valorTotal;
    public:
        void añadirItem(Item item);
        void quitarUltimo();
        bool esValida(int capacidadMax);
        void print(){
            cout<<"Peso actual: "<<pesoActual<<endl;
            cout<<"Valor total: "<<valorTotal<<endl;
            cout<<"Items: "<<endl;
            for(int i=0;i<items.size();i++){
                items[i].print();
            }
        }
}