//
// Created by Itzelene Valladares Brito on 01/12/24.
//
#include <string>
using namespace std;
#ifndef CONSOLA_H
#define CONSOLA_H

class Consola {
  private:
    string modelo;
    string fabricante;
    Juego *juego;
  public:
    Consola(string mod, string fab);
    void encender();
    void descargarJuego(juego:Juego);
};



#endif //CONSOLA_H
