#include "Perfil.h"
#include <iostream>


Perfil::Perfil(string u, string n) {
    usuarioID = u;
    nickname = n;
}

void Perfil::agregarLogro(string logro) {
    logros.push_back(logro);
}

vector<string> Perfil::listarLogros() {
    return logros;
}

void Perfil::mostrar() {
    cout << "Usuario: " << usuarioID << ", Nickname: " << nickname << endl;
    cout << "Logros:" << endl;
    for (int i = 0; i < logros.size(); i++) {
        cout << logros[i] << endl;
    }
}

