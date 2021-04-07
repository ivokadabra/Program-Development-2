# include "list.h"
#include <stdio.h>
#include <stdlib.h>

static struct queue{
float *value;
int head;
int next;
char *p;
int size;
int after;
int error;
int temp;
};

static pqueue_t* pqcreate(){
pqueue_t* pq=(pqueue_t*)malloc(sizeof(pqueue_t));
    pq->next=0;
    pq->head=0;
    pq->error=0;
    pq->size=7;
    pq->after=-1;
    pq->value=(int*)malloc(pq->size * sizeof(int));
}



static void pqinsert(pqueue_t *pq, float p){

 pq->value[pq->next]=p;

  if (pq->next!=0)
    sortHeap(pq);


    pq->next++;
    pq->after++;

}

static void sortHeap(pqueue_t *pq){
   int next=pq->next;

   if (pq->next%2!=0){
   int n= next-1;
   pq->temp=n/2;


     while(pq->value[pq->temp] > pq->value[next]) {
     swap(&pq->value[pq->temp],&pq->value[next]);
      next=pq->temp;
      pq->temp=(pq->temp -1)/2;

    }

   }
   if(pq->next%2==0){

      int n= next-2;
   pq->temp=n/2;


     while(pq->value[pq->temp] > pq->value[next]) {
     swap(&pq->value[pq->temp],&pq->value[next]);
      next=pq->temp;
      pq->temp=(pq->temp -2)/2;

    }

   }
}

static void pq_destroy(pqueue_t *pq){
   free(pq->value);
   free(pq);
}

static float* toString(pqueue_t *pq){
   return pq->value;
}

static void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

static int checkSize( pqueue_t *pq){
 return pq->size=pq->next;
}

static float minimum(pqueue_t *pq){

return pq->value[0];
}

static void extractMin(pqueue_t *pq){
int left=1;
int right=2;
int prev;
int temp;
int R;
int L;
 swap(&pq->value[pq->head],&pq->value[pq->after]);

  pq->value=(int *)realloc(pq->value,--pq->next*sizeof(int));
  int ende=pq->next;
  prev=pq->head;
   if(pq->value[right] < pq->value[left]){
       temp=right;

      }
      else temp=left;

  while(left <=ende ){

       if(right==ende){
        temp=left;
       L=left*2+1;
       R=left*2+2;
      }


      else if(pq->value[right] < pq->value[left]){
       temp=right;
       L=right*2+1;
        R=right*2+2;

      }
      else{
       temp=left;
       L=left*2+1;
       R=left*2+2;
      }

      swap(&pq->value[prev],&pq->value[temp]);

      prev=temp;
      right=R;
      left=L;
  }


}

