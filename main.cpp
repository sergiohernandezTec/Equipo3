#include <iostream>
#include <vector>
#include "Perfil.h"
#include "Juego.h"
#include "Jugador.h"
#include "Plataforma.h"

using namespace std;

int main() {
    Perfil perfil1("user123", "Jugador1");
    Perfil perfil2("user456", "Jugador2");

    perfil1.agregarLogro("Nivel 1 completado");
    perfil1.agregarLogro("Nivel 2 completado");
    perfil2.agregarLogro("Nivel 1 completado");

    cout << "Perfiles creados:" << endl;
    perfil1.mostrar();
    perfil2.mostrar();

    Juego juego1("Aventura Épica", "Desarrollador X", 12);

    Jugador jugador1("Carlos", 25);
    jugador1.crearPerfil("user123");


    Plataforma plataforma1("Plataforma X", "Tipo A");
;
    plataforma1.agregarJuego(juego1);

    cout << "\nJuegos en la plataforma:" << endl;
    plataforma1.listarJuegos();

    jugador1.jugar(juego1);


    return 0;
}
