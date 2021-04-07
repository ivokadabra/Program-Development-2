#include <iostream>
#include "vec2d.hpp"
template <typename T >
class Polygon{
    private:
    int size;
    Vektor<T> *arr;
    int next;
    public:
    Polygon(int key);
    ~Polygon();
    void setPoint(Vektor<T> v);
    Vektor<T> getPoint(int k);
    void increase();
    T circumference();
    T area();
};
