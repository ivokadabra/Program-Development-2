#include <stdio.h>
#include <stdlib.h>
#include "list.c"
#include <math.h>
#include <string.h>
#define MAX 100
int main()
{
    char string[MAX];
    char buffer[MAX];
    int i=0;
    int count=-1;
    int number=0;
    int index=0;
    int y=0;
    printf("input numbers and operands with comas inbetween");
    printf("\n");
    scanf("%[^'\n']s",string);
while(checkString(string,strlen(string))==1){
    printf("do not input characters");
    printf("\n");                        //PRÜFT ,OB EIN CHAR EINGEGEBEN IST
    gets(string);
    scanf("%[^'\n']s",string);
    //strcpy(string,buffer);

}

	//printf("%s\n",string);
	stack_t *stack=createList();
	while(string[i]!=0){
	    int n=i;
	    index=0;

	  while(string[n]!=','&& string[n]>='0' && string[n]<='9'){
	   count++;
	   n++;             //ZÄHLT WIE GROß DIE ZAHL IST
	   }
	   while(string[i]!=','){
	   if(string[i]=='+' ||string[i]=='/'||string[i]=='*'||string[i]=='-'||string[i]=='^'){
	   operation(stack,string[i]);
	   i++;                       //EINTSCHEIDET ,WELCHE OPERATION AUSGEFÜHRT WERDEN MUSS
	   index=1;
	   break;

	   }

	   number+=(string[i]-'0')*pow(10,count--);

	     i++;
	     }
	     if (index==0){
	     push(stack,number);
	     number=0;}

	    if (string[i]==',' )
	    i++;

	   }

toScreen(stack);
destroyStack(stack);
    return 0;
}
