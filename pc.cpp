//
// Created by Efrain Castelo Davalos on 01/12/24.
//

#include "pc.h"
#include "Plataforma.h"
#include <iostream>
#include <string>
using namespace std;

PC::PC(string nombre, string espec) : Plataforma(nombre, "PC"), especificaciones(espec) {}


void PC::actualizarDrivers() {
    cout << "Actualizando drivers en la PC: " << especificaciones << endl;
}

void PC::instalarJuego(string juego) {
    cout << "Instalando el juego " << juego << " en la PC."  << endl;
}

string PC::getEspecificaciones() {
    return especificaciones;
}

void PC::mostrar() {
    cout << "Especificaciones: " << especificaciones << endl;
}
