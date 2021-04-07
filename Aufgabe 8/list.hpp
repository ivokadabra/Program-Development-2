using namespace std;
class NumberFormat;

class Rational{
protected:
NumberFormat *opa;
int zaeler;
int nenner;
public:
Rational parse(string mama);
string toString();
int getZaeler(){
    return zaeler;

}
int getNenner(){
    return nenner;

}

};

class NumberFormat{


public:
    string a,b,c;
double value;
int nenner,zaeler,n=1;

  virtual  Rational parce(string mama)=0;
   virtual string format(Rational *r)=0;
};
class NumberFormatEN : public NumberFormat{

public:
Rational parce(string mama);
string format(Rational *r);
void kuerzen();

};


class NumberFormatDE : public NumberFormat{

public:
Rational parce(string mama);
string format(Rational *r);
void kuerzen();

};




