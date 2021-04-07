# include "list.h"
#include <stdio.h>
#include <stdlib.h>

static const char OK=1;

static struct heap{
  int *value;
  int head;
  int next;
  int error;
  int size;
  int temp;
  int after;
};
//ERSTELLUNG VON HEAP
static heap_t *createHeap(void){
heap_t *h=(heap_t*)malloc(sizeof(heap_t));
    h->next=0;
    h->head=0;
    h->error=0;
    h->size=3;
    h->after=-1;
    h->value=(int*)malloc(h->size * sizeof(int));
}
//NEUES ELEMENT ZUFÜGEN
static void insert(heap_t *h,int value){

    if(checkSize(h))
   increase(h);


    h->value[h->next]=value;

  if (h->next!=0)
    sortHeap(h);


    h->next++;
    h->after++;

}
//HEAP SORTIEREN
static void sortHeap(heap_t *h){
   int next=h->next;

   if (h->next%2!=0){
   int n= next-1;
   h->temp=n/2;


     while(h->value[h->temp] > h->value[next]) {
     swap(&h->value[h->temp],&h->value[next]);
      next=h->temp;
      h->temp=(h->temp -1)/2;

    }

   }
   if(h->next%2==0){

      int n= next-2;
   h->temp=n/2;


     while(h->value[h->temp] > h->value[next]) {
     swap(&h->value[h->temp],&h->value[next]);
      next=h->temp;
      h->temp=(h->temp -2)/2;

    }

   }
}
//SWAP FUNKTION
static void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
//MINIMUM DES HEAPS LIEFERN
static int minimum(heap_t *h){
 if (h->value[0]==0)
  return h->error=1;

else return h->value[0];
}
//GRÖßE PRÜFEN
static int checkSize( heap_t *h){
 return h->size=h->next;
}
//FUNKTION ZUR VERGRÖßERUNG
static void increase(heap_t *h){
 h->size+=2;
 h->value=(int *)realloc(h->value,h->size*sizeof(int));
}

static void toScreen(heap_t *h){
int i=0;
   while(i<h->next){
   printf("%d ",h->value[i]);
   i++;
   }
}
//Inhalt der Heapshals Zeichenkette
static int* toString(heap_t *h){
   return h->value;
}
//HEAP VERNICHTEN
static void destroyHeap(heap_t *h){
   free(h->value);
   free(h);
}




//MIN EXTRAHIEREN
static void extractMin(heap_t *h){
int left=1;
int right=2;
int prev;
int temp;
int R;
int L;
 swap(&h->value[h->head],&h->value[h->after]);

  h->value=(int *)realloc(h->value,--h->next*sizeof(int));
  int ende=h->next;
  prev=h->head;
   if(h->value[right] < h->value[left]){
       temp=right;

      }
      else temp=left;

  while(left <=ende ){

       if(right==ende){
        temp=left;
       L=left*2+1;
       R=left*2+2;
      }


      else if(h->value[right] < h->value[left]){
       temp=right;
       L=right*2+1;
        R=right*2+2;

      }
      else{
       temp=left;
       L=left*2+1;
       R=left*2+2;
      }

      swap(&h->value[prev],&h->value[temp]);

      prev=temp;
      right=R;
      left=L;
  }


}
//NACH ERROR CHECKEN
static char getError(heap_t *h){
return h->error;
}
//TEST 1 PRÜFT OB MAN AUS EINEN LEEREN HEAP EIN MIN EXTRAHIEREN KANN
static char test01(void){
heap_t *heap=createHeap();
  minimum(heap);
  if(getError(heap)!=0){
  destroyHeap(heap);
  return OK;}
   return !OK;
}
//TEST 2 PRÜFT OB MIN DIE KORRKTE ZAHL BESITZT
static char test02(heap_t *h){

 if (minimum(h)!=h->value[0]){
 destroyHeap(h);
 return !OK;}

  return OK;
}
//PRÜFT OB MIN NACH EINE EXTRAKTION DIE KORRKTE ZAHL BESITZT
static char test03(heap_t *h){
int left=1;
int right=2;
int temp;
  if(h->value[right] < h->value[left]){
       temp=right;

      }
      else temp=right;
int lol=h->value[temp];
extractMin(h);
if(minimum(h)!=lol){
destroyHeap(h);
return !OK;}

return OK;
}
