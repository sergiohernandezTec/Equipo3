#include<string>
using namespace std;
#include<iostream>
#include "Jugador.h"

Jugador::Jugador(string n, int e) {
    nombre = n;
    edad = e;
}

void Jugador::jugar(Juego j) {
    if (edad >= j.getEdadMin()) {
        cout << nombre << " está jugando " << j.getTitulo() << endl;
    } else {
        cout << "Edad insuficiente para jugar " << j.getTitulo() << endl;
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

