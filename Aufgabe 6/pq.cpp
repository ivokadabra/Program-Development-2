#include "pq.h"
#include <iostream>
using namespace std;


template <class T>
Pq<T> :: Pq(){
arr=new T;
counter=0;
}
template <class T>
void Pq<T> ::_insert(int val,int priority){
arr[priority]=val;
counter++;
}
template <class T>
void Pq<T> ::_print(){
int i=0;
while(i<counter){
cout<<arr[i]<<" ";
i++;
}
}
