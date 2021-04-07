#include "shape.hpp"
#include <iostream>
#include <vector>
#include <cmath>
template <typename T >
Polygon<T>::Polygon(){

}
template <typename T >
Polygon<T>::~Polygon(){
    arr.clear();
}


template <typename T >
int Polygon<T>:: getCounter(){
    return counter;
}


template <typename T >
void Polygon<T>:: setPoint(Vektor<T> v){
  arr.push_back(v);
  counter++;
}
template <typename T >
Vektor<T> Polygon<T>:: getPoint(int k){
    int n=k;
    return arr[2];
}
template <typename T >
T Polygon<T> :: circumference(){

 std::vector<Vektor<T>>tmp;

  T c=0,sum=0;
  for(int i=0;i<arr.size();i++){

      if(i+1==arr.size()){
      tmp.push_back(arr[i]-arr[0]);}

      else{
       tmp.push_back(arr[i+1]-arr[i]);

      }
  }

  for(int i=0;i<arr.size();i++){
    sum+=tmp[i].lenght();}
   tmp.clear();
  return sum;

}
template <typename T >
T Polygon<T>:: area(){



    std::vector<Vektor<T>>tmp;

    T sum=0.0;
    for(int i=0;i<arr.size();i++){
        if(i+1==arr.size()){

        tmp.push_back(arr[i].subX(arr[0]));}
        else{


        tmp.push_back(arr[i].subX(arr[i+1]));}

    }
    for(int i=0;i<arr.size();i++){
        sum+=tmp[i].mulXY();
    }

    tmp.clear();
    return abs(sum);

}

template class Polygon<double>;
template class Polygon<int>;


