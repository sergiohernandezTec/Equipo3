
#include "Perfil.h"
#include <iostream>
#include <vector>
using namespace std;



Perfil::Perfil() : usuarioID(""), nickname("") {}


Perfil::Perfil(string u, string n) {
    usuarioID = u;
    nickname = n;
}


void Perfil::mostrar() {
    cout << usuarioID << "-" << nickname << endl;
}

void Perfil::agregarLogro(string l) {
    logros.push_back(l);
}

vector<string> Perfil::listarLogros() {
    return logros;
}

string Perfil::getUsuarioID() {
    return usuarioID;
}

string Perfil::getNickname() {
    return nickname;
}



