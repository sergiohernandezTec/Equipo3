#ifndef PLATAFORMA_H
#define PLATAFORMA_H
#include <string>
#include <vector>
#include "Juego.h"
using namespace std;

class Plataforma {
private:
    string nombre;
    string tipo;
    vector<Juego> juegos;
public:
    Plataforma();

    Plataforma(string _nombre, string _tipo);
    void agregarJuego(Juego juego);
    void listarJuegos();
};


#endif //PLATAFORMA_H
