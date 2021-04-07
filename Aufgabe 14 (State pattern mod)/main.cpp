
#include <iostream>
using namespace std;
#include "automat.hpp"
#include "zustand.hpp"

Automat :: Automat(){

_z=new Angebot(this);
}
void Automat :: setZustand(Zustand *z){
delete _z;
  _z=z;
}

void Automat :: aktualisieren(){
    _z->bearbeiten();
}


int main()
{
    Automat a;
    int i=0;
    while(i<3){
    a.aktualisieren();
    i++;
    }



    return 0;
}
