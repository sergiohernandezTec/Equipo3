#include <iostream>
#include <vector>
#include "Perfil.h"
#include "Juego.h"
#include "Jugador.h"
#include "Plataforma.h"
#include "Consola.h"
#include "pc.h"

using namespace std;

int main() {
    // Crear objetos de las clases
    Jugador jugador1("Carlos", 18);
    Jugador jugador2("Ana", 12);

    Juego juego1("The Legend of Zelda", "Aventura", 12);
    Juego juego2("Call of Duty", "Acción", 18);

    Perfil perfil1 = jugador1.crearPerfil("GamerCarlos");
    Perfil perfil2 = jugador2.crearPerfil("AnaPlayer");

    // Agregar logros a los perfiles
    perfil1.agregarLogro("Primer nivel completado");
    perfil2.agregarLogro("Logro desbloqueado en mini-juego");

    // Crear una plataforma de tipo PC
    PC pcGamer("PC Gamer", "Intel i7, 16GB RAM, RTX 3080");
    pcGamer.agregarJuego(juego1);
    pcGamer.mostrar();
    pcGamer.listarJuegos();
    pcGamer.actualizarDrivers();

    // Crear una consola y agregar juegos
    Consola consolaXbox("Xbox Series X", "Microsoft");
    consolaXbox.agregarJuego(juego2);
    consolaXbox.mostrar();
    consolaXbox.listarJuegos();

    // Jugadores intentan jugar juegos
    jugador1.jugar(juego2);  // Carlos puede jugar Call of Duty
    jugador2.jugar(juego1);  // Ana puede jugar Zelda

    // Encender consola y descargar juego
    if (consolaXbox.encender()) {
        consolaXbox.descargarJuego(juego1);
    }

    return 0;
}