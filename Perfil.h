#include<string>
#include<iostream>
#include <vector>
using namespace std;
#ifndef PERFIL_H
#define PERFIL_H



class Perfil {
    private:
    string usuarioID;
    string nickname;
    vector<string> logros;
    public:
    Perfil();

    Perfil(string u,string n);
    void agregarLogro(string l);
    vector<string> listarLogros();
    string getUsuarioID();
    string getNickname();
    void mostrar();

};



#endif //PERFIL_H




