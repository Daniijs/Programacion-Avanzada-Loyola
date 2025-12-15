 #include "Mochila.h"
 
 
 
void añadirItem(Item item){
    items.push_back(item);
    pesoActual+=item.getPeso();
    valorTotal+=item.getValor();
}
void quitarUltimo(){
    items.pop_back();
    pesoActual-=items.back().getPeso();
    valorTotal-=items.back().getValor();
}
bool esValida(int capacidadMax){
    return pesoActual<=capacidadMax;
}