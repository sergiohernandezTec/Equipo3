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
    int edadMin;
    vector <Perfil> perfiles;

public:
    Juego(string t,string g, int e);
    void agregarPerfil(Perfil p);
    void listarPerfil();
    string getTitulo();
    string getGenero();
    int getEdadMin();


};



#endif //JUEGO_H