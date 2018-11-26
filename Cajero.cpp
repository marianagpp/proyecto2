#include "Cajero.h"
#include <iostream>


using namespace std;


Cajero::Cajero(string _nombre, bool _ocupado, int _tiempo, int _Tatencion){
nombre =_nombre;
ocupado = _ocupado;
tiempo = _tiempo;
Tatencion =_Tatencion;
}


void Cajero::setTatencion(int _atencion){
  Tatencion += _atencion;
}
