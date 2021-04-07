#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vektor{

private:
int x,y;
public:
Vektor();
Vektor(int x,int y);
int lenght();
void setter(int x,int y);
int getX()const;
int getY()const;
Vektor distanceTo(Vektor v);
int dotProduct(int x, int y);

Vektor add(Vektor x); // Addition
Vektor sub(Vektor x); // Subtraktion
Vektor mul(Vektor x); // Multiplikation
Vektor div(Vektor x); // Division
Vektor operator-();
Vektor operator+(const Vektor &v);
Vektor operator-(const Vektor &v);
Vektor operator*(const Vektor &v);
Vektor operator/(const Vektor &v);
bool operator!=(const Vektor& v);

};
inline std::ostream& operator<<(std::ostream& os, const Vektor& x) {
    os << x.getX()<<" "<<x.getY();
    return os;
}
