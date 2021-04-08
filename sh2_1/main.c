#include <stdio.h>
#include <stdlib.h>
#include "stack1.h"
int main()
{
    Stack s;
    entrytype e;
    createstack(&s);
    push(&s,5);
    push(&s,7);
    push(&s,8);
    printf("%d",Fristelement(&s,&e));

    return 0;
}
