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
    Perfil(string u,string n);
    void agregarLogro();
    void listarLogros();
    string getUsuarioID();
    string getNickname();

};



#endif //PERFIL_H




