#include<string>
using namespace std;
#include<iostream>
#include "Jugador.h"

Jugador::Jugador(string n, int e) {
    nombre = n;
    edad = e;
}

void Jugador::jugar(Juego juego) {
    if (edad >= juego.getEdadMinima()) {
        cout << nombre << " está jugando " << juego.getTitulo() << endl;
    } else {
        cout << "Edad insuficiente para jugar " << juego.getTitulo() << endl;
    }
}

Perfil Jugador::crearPerfil(string nickname) {
    return Perfil("ID-" + nombre, nickname);
}

string Jugador::getNombre() {
    return nombre;
}

int Jugador::getEdad() {
    return edad;
}

