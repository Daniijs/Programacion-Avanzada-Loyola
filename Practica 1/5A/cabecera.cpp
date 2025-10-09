#include "cabecera.h"

map<string,list<string>> relaciontCiudadCentros(const set<CentroDeportivo>& centros){
	map<string,list<string>> resultado;
	set<CentroDeportivo> :: iterator it;
	for(it=centros.begin();it != centros.end(); it++){
		resultado[it->getCiudad()].push_back(it->getNombre());
	}
	return resultado;
}
map<string,list<string>> relacionDisciplinaCentros(const set<CentroDeportivo>& centros){
	map<string,list<string>> resultado;
	set<CentroDeportivo> :: iterator it;
	for(it=centros.begin();it != centros.end(); it++){
		resultado[it->getDisciplinaPrincipal()].push_back(it->getNombre());
	}
	return resultado;
}
map<string,int> relacionDisciplinaSocios(const set<CentroDeportivo>& centros){
	map<string,int> resultado;
	set<CentroDeportivo> :: iterator it;
	for(it=centros.begin();it != centros.end();it++){
		resultado[it->getDisciplinaPrincipal()] += it->getNumeroSocios();
	}
	return resultado;
}
map<string,double> relacionCiudadPromedioSocios(const set<CentroDeportivo>& centros) {
    map<string, double> suma;
    map<string, int> conteo;
    set<CentroDeportivo>:: const_iterator it;
    for (it = centros.begin(); it != centros.end(); ++it) {
        suma[it->getCiudad()] += it->getNumeroSocios();
        conteo[it->getCiudad()]++;
    }
    map<string, double> promedio;
    map<string, double>::iterator itSuma;
    for (itSuma = suma.begin(); itSuma != suma.end(); ++itSuma) {
        promedio[itSuma->first] = itSuma->second / conteo[itSuma->first];
    }

    return promedio;
}
map<string,string> relacionCiudadDisciplinaComun(const set<CentroDeportivo>& centros) {
    map<string, map<string, int>> conteo;
    set<CentroDeportivo>:: const_iterator it;
    for (it = centros.begin(); it != centros.end(); ++it) {
        conteo[it->getCiudad()][it->getDisciplinaPrincipal()]++;
    }
    map<string, string> resultado;
    map<string, map<string, int>>::iterator itCiudad;
    for (itCiudad = conteo.begin(); itCiudad != conteo.end(); ++itCiudad) {
        string mejorDisciplina = "";
        int maxCount = -1;
        map<string, int>::iterator itDisciplina;
        for (itDisciplina = itCiudad->second.begin();
             itDisciplina != itCiudad->second.end();
             ++itDisciplina) {
            if (itDisciplina->second > maxCount) {
                maxCount = itDisciplina->second;
                mejorDisciplina = itDisciplina->first;
            }
        }
        resultado[itCiudad->first] = mejorDisciplina;
    }
    return resultado;
}

ostream& operator<<(ostream& os, const CentroDeportivo& c){
	return os<<c.getNombre()<<" "<<c.getCiudad()<<" "<<c.getNumeroSocios()<<" "<<c.getDisciplinaPrincipal();
}
istream& operator>>(istream& in, CentroDeportivo& c){
	string nombre, ciudad, disciplina;
    int socios;
	in>>nombre>>ciudad>>socios>>disciplina;
	c.setNombre(nombre);
    c.setCiudad(ciudad);
    c.setNumeroSocios(socios);
    c.setDisciplinaPrincipal(disciplina);
	return in;
}