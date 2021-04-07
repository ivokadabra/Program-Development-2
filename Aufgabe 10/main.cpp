#include <iostream>

using namespace std;
#include "konto.hpp"
#include <string>
int main()
{
try{
   Datum d("18.05.2000");
   SparKonto spr("123123");
   GiroKonto gr("12345");
   spr.zahleEin(1500,d);
   spr.zahleEin(2000,d);
   spr.hebeAb(3000,d);
   gr.ubearweisen("12346",3000,d);
  cout<< spr.kontostand()<<endl;
  cout<<spr.kontoauszug()<<endl;
cout<<gr.kontostand()<<endl;
}catch(const char* c){
cout << c;
}
    return 0;
}
