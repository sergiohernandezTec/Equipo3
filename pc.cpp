//
// Created by Efrain Castelo Davalos on 01/12/24.
//

#include "pc.h"
#include "Plataforma.h"
#include <iostream>
#include <string>
using namespace std;

PC::PC(string e) : Plataforma( "PC") {
    especificaciones = e;
}


void PC::actualizarDrivers() {
    cout << "Actualizando drivers en la PC: " << especificaciones << endl;
}

void PC::instalarJuego(string juego) {
    cout << "Instalando el juego \"" << juego << "\" en la PC \"" << nombre << "\"" << endl;
}

string PC::getEspecificaciones() {
    return especificaciones;
}

void PC::mostrar() {
    listarJuegos();
    cout << "Especificaciones: " << especificaciones << endl;
}
