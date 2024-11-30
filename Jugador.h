#include<string>
using namespace std;
#include<iostream>
#include<Juego.h>
#ifndef JUGADOR_H
#define JUGADOR_H



class Jugador {
private:
    string nombre;
    int edad;
public:
    Jugador(string n,int e);
    void jugar(Juego j);
    Perfil crearPerfil(string nickname);
    string getNombre();
    int getEdad();

};



#endif //JUGADOR_H






