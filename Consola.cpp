

#include "Consola.h"

Consola::Consola(string mod, string fab){
  modelo = mod;
  fabricante = fab;
}

bool Consola::encender(){
 return true;
}


void Consola::descargarJuego(Juego j){
  juegos.push_back(j);
}

