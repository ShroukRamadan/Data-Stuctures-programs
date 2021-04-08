#include <stdio.h>
#include <stdlib.h>
#include "stack1.h"
int main()
{
    Stack s;
    entrytype e;
    createstack(&s);
    push(&s,6);
    push(&s,5);
    push(&s,2);
    push(&s,3);
    printf("%d\n",Lastelement(&s,&e));
    pop(&s,&e);
    printf("%d",e);

    return 0;
}
