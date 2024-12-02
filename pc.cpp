//
// Created by Efrain Castelo Davalos on 01/12/24.
//

#include "pc.h"
#include "PC.h"
#include <iostream>

PC::PC(string n, string e) : Plataforma.h {
    especificaciones = e;
}

PC::actualizarDrivers() {
    cout << "Actualizando drivers en la PC: " << especificaciones << endl;
}

 PC::instalarJuego(string juego) {
    agregarJuego(juego);
    cout << "Instalando el juego \"" << juego << "\" en la PC \"" << nombre << "\"" << endl;
}

string PC::getEspecificaciones() {
    return especificaciones;
}

 PC::mostrar() {
    mostrar();
    cout << "Especificaciones: " << especificaciones << endl;
}
