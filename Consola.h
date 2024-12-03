
#include <string>
#include "Juego.h"
using namespace std;
#ifndef CONSOLA_H
#define CONSOLA_H
#include <vector>
#include <string>
#include "Plataforma.h"

class Consola : public Plataforma {
  private:
    string modelo;
    string fabricante;
    vector <Juego> juegos;

  public:
    Consola(string modelo, string fabricante);
    bool encender();
    void descargarJuego(Juego j);

};


#endif //CONSOLA_H
