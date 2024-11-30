#include "Plataforma.h"
#include <iostream>
#include <string>
using namespace std;

Plataforma::Plataforma(string _nombre, string _tipo){
  nombre = _nombre;
  tipo = _tipo;
 }
string getNombre();
string getTipo();
vector<Juego> listarJuegos();
void AgregarJuego(Juego juego);