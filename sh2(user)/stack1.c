
#include "stack1.h"


void createstack(Stack *ps)
{
     ps->top=0;
}

int stackempty(Stack *ps)
{
    return (ps->top==0);
}

int stackfull(Stack *ps)
{
    return(ps->top==max);
}

void push(Stack *ps,entrytype e)
{
    ps->entry[ps->top++]=e;
}

void pop(Stack *ps,entrytype *e)
{
    *e=ps->entry[--ps->top];
}

int stacksize(Stack *ps)
{
    return(ps->top);
}

entrytype Fristelement(Stack *ps,entrytype *e)
{
   *e=ps->entry[0];
   return(*e);
}

entrytype Lastelement(Stack *ps,entrytype *e)
{
    *e=ps->entry[ps->top-1];
    return *e;
}

void clearstack(Stack *ps)
{
    ps->top=0;
}
Stack copysrack(Stack *ps,Stack *cop)
{
    int i;
    ps->top=cop->top;
    for(i=0;i<ps->top;i++)
    {
        cop->entry[i]=ps->entry[i];
    }
}


