#ifndef CAJERO_H
#define CAJERO_H
#include <iostream>
#include <string>
using namespace std;

class Cajero{
private:
string nombre;
bool ocupado;
int tiempo;
int Tatencion;

public:
Cajero(string, bool, int, int);
~Cajero(){};
void setTiempo(int _tiempo){tiempo=_tiempo;};
void setOcupado(bool _ocupado){ocupado=_ocupado;};
void setTatencion(int);

string getNombre(){return nombre;};
bool getOcupado(){return ocupado;};
int getTiempo(){return tiempo;};
int getTatencion(){return Tatencion;};
};

#endif
