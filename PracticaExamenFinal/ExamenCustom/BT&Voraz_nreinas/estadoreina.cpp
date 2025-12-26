#include<iostream>
#include<list>
#include"solucionreina.h"
#include"estadoreina.h"

using namespace std;

// TODO Funciones de estado
void EstadoReina::avanza(Reina const & r)
{
    sol.addReina(r);
    nReinasColocadas++;
}

void EstadoReina::retrocede(Reina const & r)
{
    sol.deleteReina(r);
    nReinasColocadas--;
}

list <Reina> EstadoReina::getAlternativas(int f)
{
    list<Reina> alternativas;
    int n = getNReinasTotales();
    SolucionReina Sol = getSolucion();
    set<int> dp_usadas = Sol.getDPUsadas();
    set<int> ds_usadas = Sol.getDSUsadas();
    set<int> c_usadas = Sol.getCUsadas();
    for(int c=0; c<n; c++){
        if(c_usadas.find(c)==c_usadas.end()){
            Reina r(f,c);
            if(dp_usadas.find(r.getDPrincipal())==dp_usadas.end() && ds_usadas.find(r.getDSecundaria())==ds_usadas.end()) {
                alternativas.push_back(r);
            }
        }
    }
    return alternativas;
}

Reina EstadoReina::getMejorAlternativa(int f)
{
    Reina r(-1,-1);
    int n= getNReinasTotales();
    SolucionReina Sol = getSolucion();
    set<int> dp_usadas = Sol.getDPUsadas();
    set<int> ds_usadas = Sol.getDSUsadas();
    set<int> c_usadas = Sol.getCUsadas();
    for(int c=0; c<n; c++){
        if(c_usadas.find(c)==c_usadas.end()){
            Reina r1(f,c);
            if(dp_usadas.find(r.getDPrincipal())==dp_usadas.end() && ds_usadas.find(r.getDSecundaria())==ds_usadas.end()) {
                r=r1;
                break;
            }
        }
    }
    return r;
}

bool EstadoReina::esFinal()
{
    return getNReinasColocadas() >= getNReinasTotales();
}
