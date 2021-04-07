#include <iostream>
#include <bits/stdc++.h>
#include "list.h"
using namespace std;
const char OK=1;
//ERSTELLUNG VON HEAP
Heap :: Heap (int value){
_size=value ;
next=0;
after=-1;
_value = new int [value];

}

Heap :: ~Heap(){
delete []_value;
}
//NEUES ELEMENT ZUFÜGEN
void Heap :: _insert(int data){
    int b=next;
if (isFull())
increase();



_value[next]=data;
int c=_value[next];
int z=next -1;
int l=_value[z];

if (next >=1)
    sortH();

next ++;
after++;
b=next;
}
//GRÖßE PRÜFEN
bool Heap :: isFull(){
    if(next==_size)
    return true;
return false;
}
//FUNKTION ZUR VERGRÖßERUNG
void Heap :: increase(){
_size+=1;
_value= new int [_size];
}
//HEAP SORTIEREN
void Heap :: sortH(){
int ne = next;
 if (next%2!=0){
   int n= next-1;
   temp=n/2;
 int o=temp;
int t=_value[temp];
int nee= _value[ne];
     while(_value[temp] > _value[ne]) {
     _swap(&_value[temp],&_value[ne]);
      n=temp;
      temp=(temp -1)/2;

    }

   }
  else if(next%2==0){

      int n= next-2;
   temp=n/2;

int t=_value[temp];
int nee= _value[ne];

     while(_value[temp] > _value[ne]) {
     _swap(&_value[temp],&_value[ne]);
      ne=temp;
      temp=(temp -2)/2;

    }

   }
}
//SWAP FUNKTION
void Heap :: _swap(int *x,int *y){
int t=*x;
*x=*y;
*y=t;
}

void Heap :: toScreen(){
for(int i=0;i<_size;i++){
cout<<_value[i]<<" ";
}
}


void Heap ::  extractMin(){

int left=1;
int right=2;
int prev;
int temp;
int R;
int L;

 swap(&_value[head],&_value[after]);


 int v=_value[0];
  int ende=next;
  prev=head;

  _size--;

   if(_value[right] < _value[left]){

       int z=_value[right];
       int m=_value[left];

       temp=right;

      }
      else temp=left;

if(_value[prev] > _value[temp]){

  while(left <=ende ){

       if(right==ende){
        temp=left;
       L=left*2+1;
       R=left*2+2;
      }


      else if(_value[right] < _value[left]){
       temp=right;
       L=right*2+1;
        R=right*2+2;

      }
      else{
       temp=left;
       L=left*2+1;
       R=left*2+2;
      }
       int d=_value[0];
       int u=_value[temp];



      _swap(&_value[prev],&_value[temp]);

      int y=_value[prev];
       int q=_value[temp];


      prev=temp;
      right=R;
      left=L;
  }
}


}
//MINIMUM DES HEAPS LIEFERN
int Heap :: minimum(){
return _value[0];

}


bool Heap :: getError(){

bool b=true;
try{
    if(_size == 0)
    throw false;
}

catch(bool a){
    return a;
}
return b;
}
char Heap :: test01(void){

  minimum();
  if(getError()!=0){

  return OK;}
   return !OK;
}
//TEST 2 PRÜFT OB MIN DIE KORRKTE ZAHL BESITZT
char Heap :: test02(){

 if (minimum()!=_value[0]){

 return !OK;}

  return OK;
}
//PRÜFT OB MIN NACH EINE EXTRAKTION DIE KORRKTE ZAHL BESITZT
char Heap :: test03(){
int left=1;
int right=2;
int temp;
  if(_value[right] < _value[left]){
       temp=right;

      }
      else temp=right;
int lol=_value[temp];
extractMin();
if(minimum()!=lol){
return !OK;}

return OK;
}





