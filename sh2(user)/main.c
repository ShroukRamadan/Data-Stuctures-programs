#include <stdio.h>
#include <stdlib.h>
#include "stack1.h"


entrytype Fristelementstack(Stack s,entrytype e)
{
    while(!stackempty(&s))
    {
        pop(&s,&e);
    }
    return e;

}

entrytype Lastelementstack(Stack s,entrytype *e)
{
    pop(&s,&e);
    return e;
}
int stack_size(Stack s)
{
    entrytype e;
    int counter=0;
    while(!stackempty(&s))
    {
        pop(&s,&e);
        counter++;
    }
    return counter;
}
void destroystack(Stack *s)
{
    entrytype e;
    while(!stackempty(&s));
    {
        pop(s,&e);
    }
}
void copy(Stack s,Stack *cop)
{
    entrytype e;
    Stack *temp;
    createstack(&temp);
    while(!stackempty(&s)  && !stackfull(&temp))
    {
        pop(&s,e);
        push(&temp,e);
    }
    while(!stackempty(&temp) && !stackfull(&cop))
          {
              pop(&temp,&e);
              push(&cop,e);
          }

}
int main()
{
    Stack s,s2;
    entrytype e;
    createstack(&s);
    createstack(&s2);
   /* push(&s,5);
    push(&s,6);
    push(&s,9);
    push(&s,2);
    printf("%d\n" ,Fristelementstack(s,e));
    printf("%d\n",stacksize(&s));
    printf("%d\n",Lastelementstack(s,&e));
    printf("%d\n",stack_size(s));
    destroystack(&s);
    printf("%d",stacksize(&s));

    */
     push(&s,6);
     push(&s,9);
     push(&s,2);
     copy(s,&s2);
     pop(&s2,&e);
     printf("%d",e);

    return 0;
}
