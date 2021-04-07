#include <stdio.h>
#include <stdlib.h>
#include "list.c"
#include <math.h>
#include <string.h>


int main()
{
int *num;
int i=0,k=0;
 heap_t *heap=createHeap();
 int n;
int size;
 printf("how many random numbers do you want to generate");
 printf("\n");
 scanf("%d",&n);
 for(k;k<n;k++){
  insert(heap,rand()%100);  //INPUT RANDOM NUMBERS
 }
num=toString(heap);
printf("the original heap");
printf("\n");                //AUSGABE DES STRINGS
while(num[i]!=NULL){
   printf("%d ",num[i]);
   i++;
}

printf("\n");
    printf("the heap after extracted min");
    extractMin(heap);
    printf("\n");
    i=0;
size=checkSize(heap);
while(i!=size){           //AUSGABE DES STRINGS NACH EXTRACT MIN
   printf("%d ",num[i]);
   i++;
}
    printf("\n");



 if (test01()!=0)
 printf("test Number 1 is passed");

 else printf("test Number 1  is not passed");
 printf("\n");

 if (test02(heap)!=0)
 printf("test Number 2 is passed");

 else printf("test  Number 2 is not passed");
 printf("\n");


if (test03(heap)!=0)
 printf("test Number 3 is passed");

 else printf("test Number 3 is not passed");
    return 0;





}
