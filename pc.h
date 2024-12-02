//
// Created by Efrain Castelo Davalos on 01/12/24.
//


#ifndef PC_H
#define PC_H

#include "Plataforma.h"

class PC : public Plataforma {
private:
    string especificaciones;

public:
    PC( string e);
    void actualizarDrivers();
    void instalarJuego(string juego);
    string getEspecificaciones();
    void mostrar();
};

#endif // PC_H



