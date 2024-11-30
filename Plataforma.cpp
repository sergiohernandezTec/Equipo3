#include "Plataforma.h"
#include <iostream>
#include <string>
using namespace std;

Plataforma::Plataforma(string _nombre, string _tipo) {
  nombre = _nombre;
  tipo = _tipo;
}

void Plataforma::agregarJuego(Juego juego) {
  juegos.push_back(juego);
}

void Plataforma::listarJuegos() {
  for (Juego juego : juegos) {
    cout << "Juego: " << juego.getTitulo() << ", Género: " << juego.getGenero() << endl;
  }
}