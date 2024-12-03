
#include <iostream>
#include "Consola.h"

Consola::Consola(string mod, string fab) : Plataforma(mod, "Consola"), modelo(mod), fabricante(fab) {}

bool Consola::encender(){
    cout << "La consola " << modelo << " está encendida." << endl;
    return true;
}


void Consola::descargarJuego(Juego juego){
  agregarJuego(juego);
}

