
#include "vec2d.hpp"
#include <math.h>
using namespace std;
template <typename T >
Vektor<T>::Vektor(){
x=0;
y=0;
}
template <typename T >
Vektor<T>::Vektor(T x,T y){
this->x=x;
this->y=y;
}
template <typename T >
T Vektor<T>::lenght(){
return sqrt(pow(x,2)+pow(y,2));
}
template <typename T >
void Vektor<T>::setter(T x,T y){
this->x=x;
this->y=y;
}
template <typename T >
T Vektor<T>::getX()const{
return x;
}
template <typename T >
T Vektor<T>::getY()const{
return y;
}
template <typename T >
Vektor<T> Vektor<T>::operator-() { // Vorzeichen
    return Vektor(-x, -y);
}
template <typename T >
Vektor<T> Vektor<T>::distanceTo(Vektor v){
return sub(v);
}
template <typename T >
T Vektor <T>:: dotProduct(int x, int y){
return this->x*x + this->y*y;
}
template <typename T >
Vektor<T> Vektor<T> ::add(Vektor v){
return Vektor(x+v.x,y+v.y);
}
template <typename T >
Vektor<T> Vektor<T> :: sub(Vektor v){
return add(-v);
}
template <typename T >
Vektor<T> Vektor<T> :: mul(Vektor v){
return Vektor(x*v.x,y*v.y);
}
template <typename T >
Vektor<T> Vektor<T> :: div(Vektor v){
return Vektor(x/v.x,y/v.y);
}
template <typename T >
Vektor<T> Vektor <T>:: subX(Vektor v){
    return  Vektor(x-v.x,(y+v.y)/2);
}
template <typename T >
T Vektor <T>:: mulXY(){
    return x*y;
}
template <typename T >
bool Vektor<T> :: operator!=(const Vektor& v){
return x +y !=v.x +v.y;
}
template <typename T >
Vektor<T> Vektor<T> ::operator+(const Vektor &x){
return add(x);
}
template <typename T >
Vektor<T> Vektor<T> ::operator-(const Vektor &x){
return sub(x);
}
template <typename T >
Vektor<T> Vektor <T>::operator*(const Vektor &x){
return mul(x);
}
template <typename T >
Vektor<T> Vektor <T>::operator/(const Vektor &x){
return div(x);
}

template class Vektor<double>;
template class Vektor <int>;

