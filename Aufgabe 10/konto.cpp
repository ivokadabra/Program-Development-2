#include <iostream>
using namespace std;
#include "konto.hpp"
#include <string>

Datum :: Datum (string a){
  string str=a;
}

SparKonto :: SparKonto(string kontonr){
kontonummer=kontonr;
}

void SparKonto :: zahleEin(int betrag, Datum d){
 ganzeSumme+=betrag;
}
void SparKonto :: hebeAb(int betrag, Datum d){
if(ganzeSumme<0){
cout<<"Limit ist erreicht"<<endl;
exit(0);
}

  ganzeSumme-=betrag;
   nachAuszug=betrag;
}

int SparKonto :: kontostand(){
int r=ganzeSumme;
return r;
}

string SparKonto :: kontoauszug(){
if (nachAuszug!=0){
string auszug=to_string(nachAuszug);
return auszug;
}
else
cout<<"Keine Auzüge gemacht"<<endl;
}

GiroKonto :: GiroKonto(string kontonr){
kontonummer=kontonr;
}

void GiroKonto :: zahleEin(int betrag, Datum d){
 ganzeSumme+=betrag;
}

void GiroKonto :: hebeAb(int betrag, Datum d){

if(ganzeSumme<dispoWert){
cout<<"Limit ist erreicht"<<endl;
exit(0);}

 nachAuszug=ganzeSumme-betrag;
}

int GiroKonto :: kontostand(){
return ganzeSumme;
}


string GiroKonto :: kontoauszug(){
if (ganzeSumme>nachAuszug && nachAuszug!=0){
string auszug=to_string(ganzeSumme-nachAuszug);
return auszug;
}
else
cout<<"Keine Auzüge gemacht"<<endl;
}

void GiroKonto :: ubearweisen(string kontonr,int betrag, Datum d){
if(kontonummer!=kontonr)
throw"PROBLEM bei ueberweisung";
else
ganzeSumme+=betrag;

}
















