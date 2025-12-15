#include<iostream>
#include"problemafestival.h"

using namespace std;
        
// TODO i) ejecutaBacktracking
SolucionFestival ProblemaFestival::ejecutaBacktracking()
{
    EstadoFestival e(getNumeroSalas(), getNumeroCortos());
    bt(e);
    return e.getSolucion();
}
// TODO j) bt
void ProblemaFestival::bt(EstadoFestival & e)
{
    if(e.esFinal())
    {
        actualizarMejorSolucion(e);
        return;
    }
    
    list<Corto>::const_iterator it = cortos_disponibles.begin();
    advance(it, e.getNCortosAsignados());
    list<int> alternativas = e.getAlternativas();
    list<int>::const_iterator it2 = alternativas.begin();
    while(it2 != alternativas.end())
    {
        e.avanza(*it2, *it);
        bt(e);
        e.retrocede(*it2, *it);
        it2++;
    }
}
// TODO k) ejecutaVoraz
SolucionFestival ProblemaFestival::ejecutaVoraz()
{
    EstadoFestival e(getNumeroSalas(), getNumeroCortos());
    vorazR(e);
    return e.getSolucion();
}
// TODO l) vorazR
void ProblemaFestival::vorazR(EstadoFestival & e)
{
    if(e.esFinal())
    {
        actualizarMejorSolucion(e);
        return;
    }
    list<Corto>::const_iterator it = cortos_disponibles.begin();
    advance(it, e.getNCortosAsignados());
    e.avanza(e.getMejorAlternativa(), *it);
    vorazR(e);
}
// TODO m) actualizarMejorSolucion
void ProblemaFestival::actualizarMejorSolucion(EstadoFestival & e)
{
    if(mejorSol.getNumeroSalas() == 0 || e.getSolucion() > mejorSol) mejorSol = e.getSolucion();
}
