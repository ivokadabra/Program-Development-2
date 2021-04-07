
#include <iostream>
#include<climits>
#include <bits/stdc++.h>
#include <string>
#include "observer.hpp"

using namespace std;

Stack ::Stack(){
    size=6;
    next=0;
    values=new int[size];
}
void Stack :: insert(int key){

    values[next]=key;
    next++;
    str[counter]="inserting";
    counter++;
}
void Stack::print(int key){
    for(int i=0;sizeof(values)/sizeof(values[0]);i++){
        cout<<values[i]<<endl;
    }

}
void Stack :: meldeEin(Beobachter *o){

    beobachterList.push_back(o);
}
void Stack :: meldeAb(Beobachter *o){

    beobachterList.erase(std::remove(beobachterList.begin(),beobachterList.end(),o),beobachterList.end());
}

void Stack ::gibZustand_1(){
    cout<<counter<<endl;;
}

void Stack ::gibZustand_2(){
    for(int i=0;i<counter;i++){
        cout<<str[i]<<endl;
    }
}
void Stack :: benachrichtige(){

    for(int i=0;i<beobachterList.size();i++){
    beobachterList[i]->aktualisiere();
    }
}










