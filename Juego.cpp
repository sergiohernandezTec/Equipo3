
#include "Juego.h"


Juego::Juego(string t,string g, int e) {
    titulo = t;
    genero = g;
    edadMin = e;
}


void Juego::agregarPerfil(Perfil p) {
    perfiles.push_back(p);
}



void Juego::listaPerfil() {
    for (int k=0; k<perfiles.size();k++) {
        perfiles[K].mostrar();
    }

}


string Juego::getTitulo() {
    return titulo;
}


string Juego::getGenero() {
    return genero;
}


int Juego::getEdadMin() {
    return edadMin;

}

