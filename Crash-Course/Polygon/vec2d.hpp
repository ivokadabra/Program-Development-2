
#pragma once
#include <iostream>
#include <string>
using namespace std;

template <typename T >
class Vektor{

private:
T x,y;
public:
Vektor();
Vektor(T x,T y);
T lenght();
void setter(T x,T y);
T getX()const;
T getY()const;
Vektor distanceTo(Vektor v);
T dotProduct(int x, int y);

Vektor add(Vektor x); // Addition
Vektor sub(Vektor x); // Subtraktion
Vektor mul(Vektor x); // Multiplikation
Vektor div(Vektor x);
Vektor subX(Vektor x);

T mulXY();
Vektor operator-();
Vektor operator+(const Vektor &v);
Vektor operator-(const Vektor &v);
Vektor operator*(const Vektor &v);
Vektor operator/(const Vektor &v);
bool operator!=(const Vektor& v);

};
template <typename T >
inline std::ostream& operator<<(std::ostream& os, const Vektor<T>& x) {
    os << "("<<x.getX()<<","<<x.getY()<<")";
    return os;
}
