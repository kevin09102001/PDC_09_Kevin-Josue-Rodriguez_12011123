#include <iostream> // acceso_aleratorio.cpp
#include <fstream>
#include <cstdlib>
#include "Contacto.hpp"
using namespace std;

void escribir_o_leer(fstream &fcont, bool Escribir);
void leer_el_3(fstream &fcont, Contacto &cont);
void escribir_el_3(fstream &fcont, Contacto &cont);
void cambios(fstream &fcont);
