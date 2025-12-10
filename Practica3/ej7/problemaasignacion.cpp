#include<iostream>
#include"problemaasignacion.h"

using namespace std;

// TODO Funciones de los algoritmos
SolucionAsignacion ProblemaAsignacion::ejecutaBacktracking()
{
	EstadoAsignacion e(n);
	bt(e);
	return mejorSol;
}

void ProblemaAsignacion::bt(EstadoAsignacion & e)
{
	if(e.esFinal()) {
		actualizaMejorSolucion(e);
		return;
	}
	else{
		list<Agente> :: iterator it = agentes_disponibles.begin();
		advance(it, e.getNVisitados());
		list<Agente> alts = e.getAlternativas(*it);
		list<Agente> :: iterator it2 = alts.begin();
		while(it2!=alts.end()){
			e.avanza(*it2);
			bt(e);
			e.retrocede(*it2);
			it2++;
		}
	}
}

SolucionAsignacion ProblemaAsignacion::ejecutaVoraz()
{
	
}

void ProblemaAsignacion::vorazR(EstadoAsignacion & e)
{
	
}

void ProblemaAsignacion::actualizaMejorSolucion(EstadoAsignacion & e)
{
	if(e.getNValidos() == n){
		if(getMejorSolucion().getCosteTotal()==0 || e.getSolucion() > getMejorSolucion()){
			setMejorSolucion(e.getSolucion());
		}
	}
	
}
