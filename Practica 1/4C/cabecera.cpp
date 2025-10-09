#include "cabecera.h"

//auxiliares

bool esPrimo(int n){
	if(n<2)return false;
	if(n==2) return true;
	int divisores = 2; //1 y el mismo por ahora
	for(int i=2;i<n;i++){
		if(n%i==0) divisores++;
	}
	return divisores==2;
}
int edadMax(const map<string,int>& personas){
	map<string,int> :: const_iterator t=personas.begin();
	int max=t->second;
	t++;
	for(t=personas.begin();t!=personas.end(); t++){
		if(t->second > max) max=t->second;
	}
	return max;
}
//funciones principales
void leerMapa(map<string,int>& personas){
	string nombre;
	int edad;
	cout<<"Introduzca nombre(enter para terminar): ";
	while(getline(cin,nombre) && !nombre.empty()){
		cout<<"Introduzca edad:";
		cin>>edad;
		cin.ignore();
		if(personas.find(nombre)== personas.end()){
			personas[nombre]=edad;
		}
		else cout<<"Nombre repetido, no se inserta"<<endl;
		cout<<"Introduzca nombre(enter para terminar): ";
		
	}
}
void mostrarMapa(const map<string,int>& personas){
	map<string, int> :: const_iterator t;
	for(t=personas.begin(); t!=personas.end();t++){
		cout<<"Nombre: "<<t->first<<"|"<<"Edad: "<<t->second<<endl;
	}
}
void eliminarPorEdad(map<string,int>& personas, int edadMinima){
	map<string, int> :: iterator t=personas.begin();
	while(t!=personas.end()){
		if(t->second <edadMinima) t=personas.erase(t);
		else t++;
	}
}

map<string,int> primosMap(map<string,int>& personas){
	map<string, int> :: iterator t=personas.begin();
	map<string, int> primos;
	while(t!=personas.end()){
		if(esPrimo(t->second)==true){
			primos[t->first]=t->second;
		}
		t++;
	}
	return primos;
	
}

list<string> obtenerNombresEdadMaxima(map<string,int>& personas){
	map<string, int> :: iterator t=personas.begin();
	list<string> nombres;
	while(t!=personas.end()){
		if(t->second == edadMax(personas)){
			nombres.push_back(t->first); 
		}
		t++;
	}
	return nombres;
}

map<int,list<string>> invertidoMap(const map<string, int>& personas){
	map<string, int> :: const_iterator t;
	map<int,list<string>> inv;
	for(t=personas.begin(); t!=personas.end();t++){
		inv[t->second].push_back(t->first);
	}
	return inv;
}
