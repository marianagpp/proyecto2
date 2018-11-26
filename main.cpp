#include "Cliente.h"
#include "Cajero.h"

#include <string>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
  Cajero C1("Cajero 1", false,0,0);
  Cajero C2("Cajero 2", false,0,0);
  Cajero C3("Cajero 3", false,0,0);
  Cajero C4("Cajero 4", false,0,0);
  Cajero C5("Cajero 5", false,0,0);
  
  int x;
  int Sitio_Cola = 0;
  int Clientes_Atendidos=0;
  int Tiempo_Banco = 0;
  
  cout<<"Introduzca el número de clientes: ";
  cin>>x;
  cout<<endl;
  Cliente clientes[x];
  
  for(int i =0; i<x;i++){
    int tiempo = rand()%13+3;
    clientes[i].setTiempo(tiempo);
    cout<<"C"<<i+1<<"("<<clientes[i].getTiempo()<<")"<<endl;
    }
  cout<<endl<<endl;

 
  while(Clientes_Atendidos<x){
    bool a=C1.getOcupado();
    bool b=C2.getOcupado();
    bool c=C3.getOcupado();
    bool d=C4.getOcupado();
    bool e=C5.getOcupado();
    if(a==false){
      if(Sitio_Cola<x){
        C1.setOcupado(true);
        cout<<"Cajero1(C"<<Sitio_Cola+1<<") "<<endl;
        C1.setTiempo(clientes[Sitio_Cola].getTiempo());
        C1.setTatencion(clientes[Sitio_Cola].getTiempo());
        Sitio_Cola+=1; 
      }
    }
    else{
      if(b==false){
        if(Sitio_Cola<x){
          C2.setOcupado(true);
          cout<<"Cajero2(C"<<Sitio_Cola+1<<") "<<endl;
          C2.setTiempo(clientes[Sitio_Cola].getTiempo());
          C2.setTatencion(clientes[Sitio_Cola].getTiempo());
          Sitio_Cola+=1;
        }
      }
      else{
        if(c==false){
          if(Sitio_Cola<x){
            C3.setOcupado(true);
            cout<<"Cajero3(C"<<Sitio_Cola+1<<") "<<endl;
            C3.setTiempo(clientes[Sitio_Cola].getTiempo());
            C3.setTatencion(clientes[Sitio_Cola].getTiempo());
            Sitio_Cola+=1;
          }
        }
        else{
          if(d==false){
            if(Sitio_Cola<x){
              C4.setOcupado(true);
              cout<<"Cajero4(C"<<Sitio_Cola+1<<") "<<endl;
              C4.setTiempo(clientes[Sitio_Cola].getTiempo());
              C4.setTatencion(clientes[Sitio_Cola].getTiempo());
              Sitio_Cola+=1;
            }
          }
          else{
            if(e==false){
              if(Sitio_Cola<x){
                C5.setOcupado(true);
                cout<<"Cajero5(C"<<Sitio_Cola+1<<") "<<endl;
                C5.setTiempo(clientes[Sitio_Cola].getTiempo());
                C5.setTatencion(clientes[Sitio_Cola].getTiempo());
                Sitio_Cola+=1;
              }
            }
          }
        }
      }
    }
    C1.setTiempo(C1.getTiempo()-1);
    C2.setTiempo(C2.getTiempo()-1);
    C3.setTiempo(C3.getTiempo()-1);
    C4.setTiempo(C4.getTiempo()-1);
    C5.setTiempo(C5.getTiempo()-1);
    if(C1.getTiempo()==0){
      C1.setOcupado(false);
      Clientes_Atendidos+=1;
      }
    if(C2.getTiempo()==0){
      C2.setOcupado(false);
      Clientes_Atendidos+=1;
      }
    if(C3.getTiempo()==0){
      C3.setOcupado(false);
      Clientes_Atendidos+=1;
    }
    if(C4.getTiempo()==0){
      C4.setOcupado(false);
      Clientes_Atendidos+=1;
    }
    if(C5.getTiempo()==0){
      C5.setOcupado(false);
      Clientes_Atendidos+=1;
    }
  Tiempo_Banco +=1;
  }

  cout<<endl;
  cout<<endl;

  cout<<"El cajero 1 atendió: "<<C1.getTatencion()<<" minutos"<<endl;
  cout<<"El cajero 2 atendió: "<<C2.getTatencion()<<" minutos"<<endl;
  cout<<"El cajero 3 atendió: "<<C3.getTatencion()<<" minutos"<<endl;
  cout<<"El cajero 4 atendió: "<<C4.getTatencion()<<" minutos"<<endl;
  cout<<"El cajero 5 atendió: "<<C5.getTatencion()<<" minutos"<<endl;
  cout<<endl;
  cout<<"El banco atendió durante: "<<Tiempo_Banco<<" minutos"<<endl;
  return 0;
}

