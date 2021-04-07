# include "list.h"
#include <stdio.h>
#include <stdlib.h>

static struct stack{
  float *values;
  int head;
  int next;
  int error;
  int size;
};
//FUNKTION ZUR ERSTELLUNG EINES STACKS
static stack_t *createList(){
    stack_t *s=(stack_t*)malloc(sizeof(stack_t));
    s->next=0;
    s->head=-1;
    s->error=0;
    s->size=3;
    s->values=(float*)malloc(s->size * sizeof(float));
}
//FUNKTION ,DIE PRÜFT ,OB DEN STACK LEER IST
static char isEmpty(stack_t *s){
    if(s==NULL){
        return "l";
    }
    else return "v";

}
//FUNKTION ZUR EINFÜGUNG EINES NEUEN ELEMENT
static void push(stack_t *s,float value){
    if(isFull(s))
    increase(s);
    s->values[s->next]=value;
    s->next++;
    s->head++;
}
//FUNKTION, DASS PRÜFT , OB DEN STACK VOLL IST
static int isFull(stack_t *s){
    return s->size=s->next;
}
//FUNKTION ZUR STEIGERUNG DER GRÖßES DES STACKS
static void increase(stack_t *s){
s->size++;
s->values=(int *)realloc(s->values, s->size*sizeof(int));
}

//FUNKTION ,DASS DIE LETZTE STACK EINGIBT
static float top(stack_t *s){
 int n=s->head;
 return s->values[s->head];

}
//FUNKTION ,DASS DIE LETZTE STACK VERNICHTET
static void pop (stack_t *s){
    s->values=(int *)realloc(s->values, --s->next*sizeof(int));
    int l= --s->head;
}
//FUNTION ,DASS DEN GANZEN STACK VERNICHTET
static void destroyStack(stack_t *s){
    free(s->values);
    free(s);
}
//FUNKTION ZUR AUSFÜHRUNG DER EINGEGEBENEN OPERATION
static void operation(stack_t *s,char c){
    float l,r;
    if(c=='*'){
       l=top(s);
       pop(s);
       r=top(s);
       s->values[s->head]=l*r;


    }
     if(c=='/'){
        l=top(s);
       pop(s);
       r=top(s);
       s->values[s->head]=r/l;
    }
     if(c=='+'){
       l=top(s);
       pop(s);
       r=top(s);
       s->values[s->head]=l+r;

    }
     if(c=='-'){
       l=top(s);
       pop(s);
       r=top(s);
       s->values[s->head]=r-l;
    }
    if(c=='^'){
       l=top(s);
       pop(s);
       r=top(s);
       double b=pow(r,l);
       s->values[s->head]=b;
    }
}
//FUNKTION ZUM AUSGEBEN VON DEM STACK
static void toScreen(stack_t *s){
    int i=0;

      printf("%f", s->values[i]);


}
//FUNKTION , DASS PRÜFT ,OB FALSCHE ANGABE GEGEGBEN SIND
static int checkString(char a[],int n){
   int i=0;
    while(i<n){
        if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z'){
           return 1;
        }
        i++;
    }

    return 0;
}

