#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Contacto.hpp"
#include "acceso_aleratorio.hpp"
using namespace std;

int main() {
	fstream fcont0("contactos.dat", ios::out);
	fcont0.close();
	fstream fcont("contactos.dat", ios::in | ios::out | ios::binary );
	escribir_o_leer(fcont, true);
	cout << "ANTES:" << endl;
	escribir_o_leer(fcont, false);
	cout << endl << "CAMBIOS:" << endl;
	cambios(fcont);
	cout << endl << "DESPUES:" << endl;
	escribir_o_leer(fcont, false);
	fcont.close();
}