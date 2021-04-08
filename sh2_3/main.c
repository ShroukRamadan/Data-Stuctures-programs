#include <stdio.h>
#include <stdlib.h>
#include "stack1.h"
int main()
{
    Stack s;
    int x;
    createstack(&s);
    push(&s,x);
   // push(&s,6);
   // push(&s,9);
   // printf("%d\n",stacksize(&s));
   // clearstack(&s);
    printf("%d",s->top);

    return 0;
}
