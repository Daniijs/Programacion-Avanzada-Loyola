#include "Mochila.h"


class EstadoBusqueda{
    private:
        int indiceBusquedaActual;
        Mochila mochilaActual;
    public:

    esFinal(){
        return indiceBusquedaActual==mochilaActual.getItems().size();
    }

}



