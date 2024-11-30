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
  for (int i = 0; i < juegos.size(); i++) {
    cout << "Juego: " << juegos[i].getTitulo() << ", Género: " << juegos[i].getGenero() << endl;
  }
}