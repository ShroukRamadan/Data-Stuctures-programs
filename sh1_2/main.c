#include <stdio.h>
#include <stdlib.h>
#include "stack1.h"
int main()
{
    Stack s;
    entrytype e;
    int i;
    char menu;
    createstack(&s);

    for(i=0;!stackfull(&s);i++)
    {


       printf("\nchoose from menu\n");
       printf("(a) Read an element then Push it\n");
       printf("(b)Pop an element then display it\n");
       printf("(c)Exit\n");
       printf("enter your choice:");
       scanf("%c",&menu);
       switch(menu)
       {
           case 'a':
             printf("enter the element:");
             scanf("%d",&e);
             push(&s,e);
             break;
           case 'b':
            pop(&s,&e);
            printf("the last element in stack is : %d",e);
            break;
           case 'c':
            break;
       }


    }

    return 0;
}
