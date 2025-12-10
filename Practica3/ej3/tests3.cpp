#include <iostream>
#include <string>
#include "cabecera.h"

using namespace std;

void assertEquals(int obtenido, int esperado, string nombreTest) {
	if (obtenido == esperado)
		cout << "[OK] " << nombreTest << endl;
	else
		cout << "[FAILED] " << nombreTest << " → Esperado: " << esperado << ", Obtenido: " << obtenido << endl;
}

int main() {
	cout << "--- TESTS AUTOMÁTICOS ---" << endl;

	Tecnico v1[8] = {
		{"Antonio",2},{"Juan",4},{"Alberto",1},{"Ana",5},
		{"Maria",3},{"Pablo",3},{"Jose",4},{"Pedro",2}
	};
	Tecnico v2[8] = {
		{"Antonio",3},{"Juan",6},{"Alberto",8},{"Ana",1},
		{"Maria",5},{"Pablo",4},{"Jose",2},{"Pedro",7}
	};
	Tecnico v3[8] = {
		{"Antonio",3},{"Juan",6},{"Alberto",6},{"Ana",3},
		{"Maria",4},{"Pablo",1},{"Jose",2},{"Pedro",3}
	};
	Tecnico v4[8] = {
		{"Antonio",3},{"Juan",6},{"Alberto",3},{"Ana",6},
		{"Maria",4},{"Pablo",2},{"Jose",4},{"Pedro",8}
	};
	Tecnico v5[8] = {
		{"Antonio",3},{"Juan",7},{"Alberto",2},{"Ana",1},
		{"Maria",5},{"Pablo",2},{"Jose",1},{"Pedro",24}
	};

	assertEquals(mismaCarga(v1, 8), 24, "Carga total v1");
	assertEquals(mismaCarga(v2, 8), 36, "Carga total v2");
	assertEquals(mismaCarga(v3, 8), -1, "Carga total v3");
	assertEquals(mismaCarga(v4, 8), -1, "Carga total v4");
	assertEquals(mismaCarga(v5, 8), -1, "Carga total v5");

	return 0;
}

