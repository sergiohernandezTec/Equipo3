//
// Created by Itzelene Valladares Brito on 01/12/24.
//

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