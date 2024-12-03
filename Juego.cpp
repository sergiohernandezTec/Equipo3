#include "Juego.h"
#include "Perfil.h"





Juego::Juego(string t,string g, int e) {
    titulo = t;
    genero = g;
    edadMinima = e;
}


void Juego::agregarPerfil(Perfil perfil) {
    perfiles.push_back(perfil);
}

void Juego::listarPerfiles() {
    for(int k=0; k<perfiles.size();k++) {
        perfiles[k].mostrar();
    }

}

string Juego::getTitulo() {
    return titulo;
}


string Juego::getGenero() {
    return genero;
}


int Juego::getEdadMinima(){
    return edadMinima;

}
