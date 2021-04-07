#include <iostream>
#include "pq.h"
using namespace std;
#include <bits/stdc++.h>

template <class T>
Pq<T> :: Pq(){
arr=new T;
counter=0;
}
template <class T>
Pq<T> :: ~Pq(){
delete []arr;
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
template <class T>
int Pq<T> :: extractMin(){
return arr[0];
}


template <class T>
void Pq<T> :: pq_removed(int a){
arr[a]=0;
}
template <class T>
void Pq<T> :: pq_decreaseKey(int prir,int a){
int i=0;
while(arr[i]!=a){
i++;
}
swap(arr[i],arr[a]);
}


int main()
{
Pq<int> p;
p._insert(5,1);
p._insert(4,3);
p._insert(9,2);
p._insert(58,0);

p._print();
p.pq_removed(1);
cout<<endl;
p._print();
cout<<endl;
//p.pq_decreaseKey(3,5);
//cout<<endl;

cout<<endl;
cout<<"the min is ";
cout<<p.extractMin();

    return 0;
}
