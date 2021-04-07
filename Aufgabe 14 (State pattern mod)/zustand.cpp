#include <iostream>
#include "automat.hpp"
#include "zustand.hpp"
using namespace std;

Zustand :: Zustand(){}


Zustand :: Zustand(Automat *automat){
    a=automat;
}

void Zustand :: setZustand(Zustand *z){
    a->setZustand(z);
}
  Angebot ::Angebot(Automat *automat){
      a=automat;
  }
 NichtFretig:: NichtFretig(Automat *automat){
     a=automat;
 }
  Ruckgabe:: Ruckgabe(Automat *automat){
      a=automat;
  }

void Angebot ::bearbeiten(){
    cout<<"I am Angebot"<<endl;
    setZustand(new NichtFretig(a));
}

void NichtFretig ::bearbeiten(){
    cout<<"I am NichtFertig"<<endl;
    setZustand(new Ruckgabe(a));
}
void Ruckgabe ::bearbeiten(){
    cout<<"I am Ruckgabe"<<endl;
     setZustand(new Angebot(a));
}
