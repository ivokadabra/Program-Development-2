
class Datum{
public:
Datum(string a);
};


class Konto{
public:
virtual void hebeAb(int betrag, Datum d)=0;
virtual void zahleEin(int betrag, Datum d)=0;
virtual int kontostand()=0;
virtual string kontoauszug()=0;

};
class GiroKonto:public Konto{
int ganzeSumme=0;
int nachAuszug=0;
int dispoWert=-100;
string kontonummer;
public:
GiroKonto(string kontonr);
 void hebeAb(int betrag, Datum d);
 void zahleEin(int betrag, Datum d);
 int kontostand();
 string kontoauszug();
 void ubearweisen(string kontonr,int betrag, Datum d);

};
class SparKonto :public Konto{
int ganzeSumme=0;
int nachAuszug=0;
string kontonummer;
public:
SparKonto(string kontonr);
 void hebeAb(int betrag, Datum d);
 void zahleEin(int betrag, Datum d);
 int kontostand();
 string kontoauszug();

};
