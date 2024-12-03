
#include <string>
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
    Perfil(string usuarioID, string nickname);
    void agregarLogro(string logro);
    vector<string> listarLogros();
    string getUsuarioID();
    void mostrar();
};

#endif // PERFIL_H







