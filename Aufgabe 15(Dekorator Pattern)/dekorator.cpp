
#include "dekorator.hpp"
#include <iostream>
using namespace std;

int Expresso ::getSum(){
    return praise;
}

int Homemade ::getSum(){
    return praise;
}

int Dunkel ::getSum(){
    return praise;
}

Dekorrier:: Dekorrier(Kaffe *k):delegate(k){}

 Zuker::Zuker(Kaffe *k):Dekorrier(k){};

  int Zuker :: getSum(){
      return praise + delegate->getSum();
  }



 Milk:: Milk(Kaffe *k):Dekorrier(k){};


 int Milk :: getSum(){
      return praise + delegate->getSum();
  }





