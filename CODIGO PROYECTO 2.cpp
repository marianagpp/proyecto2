#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;

class Cajero{
  private:
  string nombre;
  bool ocupado;
  int tiempo;
  int t_atencion;

  public:
  Cajero(string, bool, int, int);
  ~Cajero(){};
  void setTiempo(int _tiempo){tiempo=_tiempo;};
  void setOcupado(bool _ocupado){ocupado=_ocupado;};
  void setT_atencion(int);

string getNombre(){return nombre;};
bool getOcupado(){return ocupado;};
int getTiempo(){return tiempo;};
int getT_atencion(){return t_atencion;};};

Cajero::Cajero(string _nombre, bool _ocupado, int _tiempo, int _t_atencion){
nombre =_nombre;
ocupado = _ocupado;
tiempo = _tiempo;
t_atencion =_t_atencion;}

void Cajero::setT_atencion(int _atencion){
  t_atencion += _atencion;}

class Cliente {
  protected:
  int Tiempo;
  
  public:
  ~Cliente(){};
  void setTiempo(int _Tiempo){Tiempo=_Tiempo;};
  int getTiempo(){return Tiempo;};};

int main() {
  Cajero C1("Cajero 1",false,0,0);
  Cajero C2("Cajero 2",false,0,0);
  Cajero C3("Cajero 3",false,0,0);
  Cajero C4("Cajero 4",false,0,0);
  Cajero C5("Cajero 5",false,0,0);
  
  int x;
  int posicion = 0;
  int atendidos=0;
  int Tiempo_Banco = 0;
  
  cout<<"Ingrese la cantidad de clientes: ";
  cin>>x;
  cout<<endl;
  Cliente clientes[x];
  
  for(int i =0; i<x;i++){
    int tiempo = rand()%13+3;
    clientes[i].setTiempo(tiempo);
    cout<<"C"<<i+1<<"("<<clientes[i].getTiempo()<<")"<<endl;}
  cout<<endl;

  while(atendidos<x){
    bool a=C1.getOcupado();
    bool b=C2.getOcupado();
    bool c=C3.getOcupado();
    bool d=C4.getOcupado();
    bool e=C5.getOcupado();
    if(a==false){
      if(posicion<x){
        C1.setOcupado(true);
        cout<<"Cajero1 (C"<<posicion+1<<") "<<endl;
        C1.setTiempo(clientes[posicion].getTiempo());
        C1.setT_atencion(clientes[posicion].getTiempo());
        posicion+=1; 
      } }

    else{
      if(b==false){
        if(posicion<x){
          C2.setOcupado(true);
          cout<<"Cajero2 (C"<<posicion+1<<") "<<endl;
          C2.setTiempo(clientes[posicion].getTiempo());
          C2.setT_atencion(clientes[posicion].getTiempo());
          posicion+=1;
        } }

      else{
        if(c==false){
          if(posicion<x){
            C3.setOcupado(true);
            cout<<"Cajero3 (C"<<posicion+1<<") "<<endl;
            C3.setTiempo(clientes[posicion].getTiempo());
            C3.setT_atencion(clientes[posicion].getTiempo());
            posicion+=1;
          } }

        else{
          if(d==false){
            if(posicion<x){
              C4.setOcupado(true);
              cout<<"Cajero4 (C"<<posicion+1<<") "<<endl;
              C4.setTiempo(clientes[posicion].getTiempo());
              C4.setT_atencion(clientes[posicion].getTiempo());
              posicion+=1;
            } }

          else{
            if(e==false){
              if(posicion<x){
                C5.setOcupado(true);
                cout<<"Cajero5 (C"<<posicion+1<<") "<<endl;
                C5.setTiempo(clientes[posicion].getTiempo());
                C5.setT_atencion(clientes[posicion].getTiempo());
                posicion+=1;
              } } } } } }

    C1.setTiempo(C1.getTiempo()-1);
    C2.setTiempo(C2.getTiempo()-1);
    C3.setTiempo(C3.getTiempo()-1);
    C4.setTiempo(C4.getTiempo()-1);
    C5.setTiempo(C5.getTiempo()-1);
    if(C1.getTiempo()==0){
      C1.setOcupado(false);
      atendidos+=1;}
    if(C2.getTiempo()==0){
      C2.setOcupado(false);
      atendidos+=1;}
    if(C3.getTiempo()==0){
      C3.setOcupado(false);
      atendidos+=1;}
    if(C4.getTiempo()==0){
      C4.setOcupado(false);
      atendidos+=1;}
    if(C5.getTiempo()==0){
      C5.setOcupado(false);
      atendidos+=1;}
  Tiempo_Banco +=1;}
  cout<<endl;

  cout<<"El cajero 1 atendio en "<<C1.getT_atencion()<<" minutos."<<endl;
  cout<<"El cajero 2 atendio en "<<C2.getT_atencion()<<" minutos."<<endl;
  cout<<"El cajero 3 atendio en "<<C3.getT_atencion()<<" minutos."<<endl;
  cout<<"El cajero 4 atendio en "<<C4.getT_atencion()<<" minutos."<<endl;
  cout<<"El cajero 5 atendio en "<<C5.getT_atencion()<<" minutos."<<endl;
  cout<<endl;
  cout<<"El banco atendio a todos los clientes en "<<Tiempo_Banco<<" minutos."<<endl;
  return 0;}
