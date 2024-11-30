
#include "Juego.h"



Juego::Juego(string t,string g, int e) {
    titulo = t;
    genero = g;
    edadMin = e;
}



void agregarPerfil(Perfil p);





void mostrarPerfiles();
vector listaPerfil();
string getTitulo();
string getGenero();
int getEdadMin();