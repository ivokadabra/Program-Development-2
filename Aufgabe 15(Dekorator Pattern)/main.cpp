
#include <iostream>
#include "dekorator.hpp"
using namespace std;
int main()
{

     //string s("Here is the praise");

     Kaffe *k = new Zuker(new Milk(new Expresso()));
    cout<<k->getSum();

    return 0;
}
