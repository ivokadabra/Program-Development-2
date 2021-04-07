#include <iostream>
#include "vec2d.hpp"
#include <vector>
#include <cmath>

template <typename T >
class Shape{
    public:
    virtual T area()=0;
    virtual void setPoint(Vektor<T> v)=0;
    virtual Vektor<T> getPoint(int k)=0;
};

template <typename T >
class Polygon:public Shape<T>{
    protected:
    int size;
    int counter=0;
    std::vector<Vektor<T>>arr;
    int next;
    public:
    Polygon();
    ~Polygon();
    void setPoint(Vektor<T> v);
    Vektor<T> getPoint(int k);
    T circumference();
    T area();
    int getCounter();
};

template <typename T >
class Rektagle:public Shape<T>{
    protected:
    Polygon<T> p;
    T width;
    T height;
    public:
    Rektagle(Vektor<T> v,T x,T y){
        width=x;
        height=y;
         p.setPoint(v);
    }

    void setPoint(Vektor<T> v){
        p.setPoint(v);
    }
    Vektor<T> getPoint(int k){
        p.getPoint(k);
    }

    T area(){
        return width*height;
    }

};
template<typename T>
class Quadrat:public Shape<T>{
    protected:
    Polygon <T>p;
    T width;
    public:
     Quadrat(Vektor<T> v,T x){
        width=x;
        p.setPoint(v);
    }

    void setPoint(Vektor<T> v){
        p.setPoint(v);
    }
    Vektor<T> getPoint(int k){
        p.getPoint(k);
    }

    T area(){
        return width*width;
    }

};


template <typename T >
class Circle:public Shape<T>{
    private:
      T radius;
      Polygon<T> p;
    public:
    Circle(Vektor<T> v,int x){
        radius=x;
        p.setPoint(v);
    }

    void setPoint(Vektor<T> v){
        p.setPoint(v);
    }
    Vektor<T> getPoint(int k){
        p.getPoint(k);
    }

    T area(){
      return pow(radius,2)*3.1415;
    }
};



template<typename T>
class Triangle:public Shape<T>{
  private:
   Polygon<T> p;
   public:
   Triangle(Vektor<T> x,Vektor<T> y,Vektor<T> z){
    p.setPoint(x);
    p.setPoint(y);
    p.setPoint(z);
   }

   void setPoint(Vektor<T> v){
        p.setPoint(v);
    }
    Vektor<T> getPoint(int k){
        p.getPoint(k);
    }

   T area(){
       p.area();
   }
};


