#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack s;
    entrytype e;
    createstack(&s);
    push(&s,5);
    pop(&s,&e);
    printf("%d",e);

    return 0;
}
