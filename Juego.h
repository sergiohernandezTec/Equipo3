#include<string>
using namespace std;
#include<iostream>
#include<vector>
#ifndef JUEGO_H
#define JUEGO_H
#include "Perfil.h"



class Juego {
private:
    string titulo;
    string genero;
    int edadMinima;
    vector<Perfil> perfiles;

public:
    Juego(string titulo,string genero, int edadMinima);
    Juego();
    void agregarPerfil(Perfil perfil);
    void listarPerfiles();
    string getTitulo();
    string getGenero();
    int getEdadMinima();
};



#endif //JUEGO_H