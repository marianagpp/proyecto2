#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>


using namespace std;

class Cliente {
  protected:
  int Tiempo;
  public:
  ~Cliente(){};
  void setTiempo(int _Tiempo){Tiempo=_Tiempo;};
  int getTiempo(){return Tiempo;}; 
};
#endif
