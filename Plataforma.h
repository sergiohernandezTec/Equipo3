#ifndef PLATAFORMA_H
#define PLATAFORMA_H

# include <vector>
#include <string>
using namespace std;
#include "Juego.h"

class Plataforma {
private:
  string nombre;
  string tipo;
 public:
   Plataforma(string _nombre, string _tipo);
   string getNombre();
   string getTipo();
   vector<Juego> listarJuegos();
   void AgregarJuego(Juego juego);
};



#endif //PLATAFORMA_H
