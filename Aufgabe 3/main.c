#include <stdio.h>
#include <stdlib.h>
#include "list.c"
#include <math.h>
#include <string.h>


int main()
{
float *num;
int i=0;
int size;
    pqueue_t *pqueue=pqcreate();
    pqinsert(pqueue,9.0);
    pqinsert(pqueue,10.0);
    pqinsert(pqueue,7.0);
    pqinsert(pqueue,8.0);
    pqinsert(pqueue,1.0);
    pqinsert(pqueue,5.0);
    num=toString(pqueue);
    printf("the original");
    printf("\n");
    size=checkSize(pqueue);
    while(i<size){
    printf("%f ",num[i]);
    i++;
}
printf("\n");
printf("%f",minimum(pqueue));
printf("\n");
    printf("the heap after extracted min");
    extractMin(pqueue);
    printf("\n");
    i=0;

 size=checkSize(pqueue);
while(i!=size){
   printf("%f ",num[i]);
   i++;
}
 printf("\n");
 printf("%f",minimum(pqueue));

    return 0;
}
