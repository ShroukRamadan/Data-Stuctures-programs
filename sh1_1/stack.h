#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define max 10

typedef char entrytype;

typedef struct stack{
     int top;
     entrytype entry[max];

}Stack;


void createstack(Stack *ps);

int stackempty(Stack *ps);

int stackfull(Stack *ps);

void push(Stack *ps,entrytype e);

void pop(Stack *ps,entrytype *e);


int stacksize(Stack *ps);

#endif // STACK_H_INCLUDED
