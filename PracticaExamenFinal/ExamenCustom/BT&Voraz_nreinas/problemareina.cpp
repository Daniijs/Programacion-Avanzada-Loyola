#include<iostream>
#include<list>
#include"estadoreina.h"
#include"problemareina.h"

using namespace std;

// TODO Funciones de los algoritmos
list <SolucionReina> ProblemaReina::ejecutaBacktracking()
{
    EstadoReina e(getNumReinas());
    bt(e);
    return getSoluciones();
}

void ProblemaReina::bt(EstadoReina & e)
{
    if(e.esFinal()) actualizarSoluciones(e);

    int filaActual= e.getNReinasColocadas();
    list<Reina> alternativas = e.getAlternativas(filaActual);
    list<Reina> :: iterator it=alternativas.begin();
    while(it!=alternativas.end()){
        e.avanza(*it);
        bt(e);
        e.retrocede(*it);
        it++;
    }
}

list <SolucionReina> ProblemaReina::ejecutaVoraz()
{
    EstadoReina e(getNumReinas());
    vorazR(e);
    return getSoluciones();
}

void ProblemaReina::vorazR(EstadoReina & e)
{
    if(e.esFinal()) actualizarSoluciones(e);
    int filaActual= e.getNReinasColocadas();
    Reina alternativa = e.getMejorAlternativa(filaActual);
    if(alternativa.getFila()!=-1) {
        e.avanza(alternativa);
        vorazR(e);
    }
}

void ProblemaReina::actualizarSoluciones(EstadoReina & e)
{
    l.push_back(e.getSolucion());
    setNumSoluciones(getNumSoluciones()+1);
}
