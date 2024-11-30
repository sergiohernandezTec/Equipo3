#include<string>
using namespace std;
#include<iostream>
#include "Jugador.h"
#include "Juego.h"
#include "Perfil.h"


Jugador::Jugador(string n,int e) {
    nombre=n;
    edad=e;
}


void Jugador::jugar(Juego juego) {
    if (edad >= juego.getEdadMinima()) {
        cout << nombre << " está jugando " << juego.getTitulo() << std::endl;
    } else {
        cout << "Edad insuficiente para jugar " << juego.getTitulo() << std::endl;
    }
}

Perfil::crearPerfil(string nickname) {
    return Perfil("ID-"+ nombre,nickname);
}


string Jugador::getNombre() {
    return nombre;
}


int jugador::getEdad() {
    return edad;
}
