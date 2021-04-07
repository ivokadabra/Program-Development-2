
#include <iostream>
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
     swap(_value[temp],_value[ne]);
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

//MINIMUM DES HEAPS LIEFERN

char Heap ::  extractMin(){
    return _value[0];

}






//FEHLER FINDEN
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

  extractMin();
  if(getError()!=0){

  return OK;}
   return !OK;
}
//TEST 2 PRÜFT OB MIN DIE KORRKTE ZAHL BESITZT
char Heap :: test02(){

 if (extractMin()!=_value[0]){

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
if(extractMin()!=lol){
return !OK;}

return OK;
}




