#include <iostream>
#include <string.h>
#include "list.hpp"
using namespace std;


int main (){
     Rational r,l;
    NumberFormatEN p;
    NumberFormatDE pp;
    r=p.parce("1,114.5");//england
    cout<< r.toString()<<endl;
    l=pp.parce("1.114,5");//deutschland
    cout<< l.toString()<<endl;

return 0;
}
