#include <iostream>
using namespace std;
#include <vector>
class Beobachter;

class Stack {


private:
private:
int *values;
int size;
int next;
std::vector<class Beobachter*>beobachterList;
string str[10];
int counter;
public:
Stack();
void insert(int key);
void print(int key);
void meldeEin(Beobachter *o);
void meldeAb(Beobachter *o);
void benachrichtige();
void gibZustand_1();
void gibZustand_2();
};


class Beobachter{
public:
virtual void aktualisiere()=0;

};


class Logger : public Beobachter{
Stack *sbj;
public:
Logger(Stack * stack){
sbj=stack;
}
void aktualisiere(){
sbj->gibZustand_1();
}
};

 class Counter : public Beobachter{
 Stack *subj;
public:
Counter(Stack * stack){
subj=stack;
}
void aktualisiere(){
 subj->gibZustand_2();
}
};

