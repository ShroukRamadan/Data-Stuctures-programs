#include <stdio.h>
#include <stdlib.h>
#include "stack1.h"
int main()
{
    Stack s1,s2;
    entrytype e;
    int i;
    createstack(&s1);
    createstack(&s2);
    for(i=0;i<5;i++)
    {
        printf("push this element in stack:");
        scanf("%d",&e);
        push(&s1,e);
    }
    copystack(&s1,&s2);
    printf("\n");
    for(i=0;i<5;i++)
    {

        pop(&s2,&e);
        printf("%d\n",e);
    }
    return 0;
}
