#include "polygon.hpp"
#include <iostream>
template <typename T >
Polygon<T>::Polygon(int key){
    size=key;
    arr=new Vektor<T>[size];
    next=0;
}
template <typename T >
Polygon<T>::~Polygon(){
    delete []arr;
}
template<typename T>
void Polygon<T>::increase(){

     size*=2;
     Vektor<T> *tmp=new Vektor<T>[size];

    for(int i=0;i<size;i++)
    tmp[i]=arr[i];
    size*=2;
    delete []arr;

   arr=tmp;


}
template <typename T >
void Polygon<T>:: setPoint(Vektor<T> v){
    if(next==size)
    increase();
    arr[next]=v;
    next++;
}
template <typename T >
Vektor<T> Polygon<T>:: getPoint(int k){
    int n=k;
    return arr[2];
}
template <typename T >
T Polygon<T> :: circumference(){
if(next>2){
  Vektor<T> *tmp=new Vektor<T>[size];
  Vektor<T> a,b,d;
  T c=0,sum=0;
  for(int i=0;i<size;i++){
       a=arr[i];
       b=arr[i+1];
      if(i+1==size){
      tmp[i]=arr[i]-arr[0];
      d=tmp[i];}
      else{
       tmp[i]=arr[i+1]-arr[i];
      d=tmp[i];
      }
  }

  for(int i=0;i<size;i++){
    sum+=tmp[i].lenght();}
   delete [] tmp;
  return sum;}
  else throw "Man brauch mehr als zwei Punkte";
}
template <typename T >
T Polygon<T>:: area(){
if(next>2){
    Vektor<T> *tmp=new Vektor<T>[size];
    Vektor<T> a,b,d;
    T sum=0.0;
    for(int i=0;i<size;i++){
        if(i+1==size){
        tmp[i]=arr[i].subX(arr[0]);}
        else{
        tmp[i]=arr[i].subX(arr[i+1]);}
        a=arr[i];
        b=arr[i+1];
        d=tmp[i];
    }
    for(int i=0;i<size;i++){
        sum+=tmp[i].mulXY();
    }
    delete []tmp;
    return sum;}
    else throw "Man brauch mehr als zwei Punkte";
}

template class Polygon<double>;
template class Polygon<int>;

