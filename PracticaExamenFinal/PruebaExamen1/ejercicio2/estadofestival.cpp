#include<iostream>
#include"estadofestival.h"

using namespace std;
        
// TODO d) avanza
void EstadoFestival::avanza(int id, Corto const & c)
{
    sol.addCortoInSala(id, c);
    setNCortosAsignados(getNCortosAsignados() + 1);
}
// TODO e) retrocede
void EstadoFestival::retrocede(int id, Corto const & c)
{
    sol.deleteCortoInSala(id, c);
    setNCortosAsignados(getNCortosAsignados() - 1);
}
// TODO f) getAlternativas
list<int> EstadoFestival::getAlternativas()
{
    list<int> alternativas;
    list<Sala>::const_iterator it = sol.getSalas().begin();
    while(it!=sol.getSalas().end()){
        alternativas.push_back(it->getId());
        it++;
    }
    return alternativas;
}
// TODO g) getMejorAlternativa
int EstadoFestival::getMejorAlternativa()
{
    Sala min = sol.getSalas().front();
    list<Sala>::const_iterator it = sol.getSalas().begin();
    while(it != sol.getSalas().end())
    {
        if(it->getTiempo() < min.getTiempo())
            min = *it;
        it++;
    }
    return min.getId();
}
// TODO h) esFinal
bool EstadoFestival::esFinal()
{
    return getNCortosAsignados() == getNCortosTotales();
}
