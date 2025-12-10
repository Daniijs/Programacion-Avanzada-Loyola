#include<iostream>
#include"estadoasignacion.h"

using namespace std;

// TODO Funciones de estado
void EstadoAsignacion::avanza(Agente const & a)
{
	sol.addAgente(a);
	nVisitados++;
	nValidos++;
	
	
}

void EstadoAsignacion::retrocede(Agente const & a)
{
	if(nVisitados !=0 && nValidos!=0) {
		sol.deleteAgente(a);
		nVisitados--;
		nValidos--;
	}
}

list <Agente> EstadoAsignacion::getAlternativas(Agente const & a)
{
	list<Agente> alternativas;
	const set<int> agentesOcupados = sol.getAgentesUsados();
    const set<int> tareasOcupadas = sol.getTareasAsignadas();
    int idAgente=a.getCodAgente();
    int idTarea= a.getTarea().getCodTarea();
    
    bool agentelibre = (agentesOcupados.count(idAgente)==0);
    bool tareaLibre = (tareasOcupadas.count(idTarea)==0);
	
	if(agentelibre&&tareaLibre) alternativas.push_back(a);
	
	return alternativas;
}

Agente EstadoAsignacion::getMejorAlternativa(Agente const & a)
{
	if(!getAlternativas(a).empty()) return getAlternativas(a).front();
}

bool EstadoAsignacion::esFinal()
{
	return nVisitados == nTotal;
}
