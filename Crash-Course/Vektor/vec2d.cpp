#include "vec2d.hpp"
#include <math.h>
using namespace std;
Vektor::Vektor(){
x=0;
y=0;
}

Vektor::Vektor(int x,int y){
this->x=x;
this->y=y;
}
int Vektor::lenght(){
return sqrt(pow(x,2)+pow(y,2));
}

void Vektor::setter(int x,int y){
this->x=x;
this->y=y;
}
int Vektor::getX()const{
return x;
}
int Vektor::getY()const{
return y;
}

Vektor Vektor::operator-() { // Vorzeichen
    return Vektor(-x, -y);
}

Vektor Vektor::distanceTo(Vektor v){
return sub(v);
}
int Vektor :: dotProduct(int x, int y){
return this->x*x + this->y*y;
}

Vektor Vektor ::add(Vektor v){
return Vektor(x+v.x,y+v.y);
}
Vektor Vektor :: sub(Vektor v){
return add(-v);
}
Vektor Vektor :: mul(Vektor v){
return Vektor(x*v.x,y*v.y);
}
Vektor Vektor :: div(Vektor v){
return Vektor(x/v.x,y/v.y);
}

bool Vektor :: operator!=(const Vektor& v){
return x +y !=v.x +v.y;
}

Vektor Vektor ::operator+(const Vektor &x){
return add(x);
}
Vektor Vektor ::operator-(const Vektor &x){
return sub(x);
}
Vektor Vektor ::operator*(const Vektor &x){
return mul(x);
}
Vektor Vektor ::operator/(const Vektor &x){
return div(x);
}
