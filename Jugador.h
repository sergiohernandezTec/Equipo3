#include<string>
using namespace std;
#include"Juego.h"
#include "Perfil.h"
#ifndef JUGADOR_H
#define JUGADOR_H



class Jugador {
private:
    string nombre;
    int edad;
public:
    Jugador(string nombre,int edad);
    void jugar(Juego juego);
    Perfil crearPerfil(string nickname);
    string getNombre();
    int getEdad();

};



#endif //JUGADOR_H






