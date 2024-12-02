//
// Created by Itzelene Valladares Brito on 01/12/24.
//
#include <string>
#include "Juego.h"
using namespace std;
#ifndef CONSOLA_H
#define CONSOLA_H
#include <vector>

class Consola {
  private:
    string modelo;
    string fabricante;
    vector <Juego> juegos;

  public:
    Consola(string mod, string fab);
    bool encender();
    void descargarJuego(Juego j);

};


#endif //CONSOLA_H
