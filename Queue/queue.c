#include "queue.h"
#include<stdlib.h>

void create_queue(Queue *pq)
{
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;
}

int queue_empty(Queue *pq)
{
   return ( pq->front=Null );
}

int queue_full(Queue *pq)
{
    return 0;
}

int queue_size(Queue *pq)
{
    return pq->size ;
}
void append(Queue *pq)
{
    QueueNode *pn=(QueueNode *) malloc(sizeof(QueueNode));
    pn->next=Null;
    pn->entry=e;
    if(! pq->rear)
    {
        pq->front=pn;
    }
    else
    {
         pq->rear->next=pn;
    }
    pq->rear=pn;
    pq->size++;

}

void serve(Queue *pq,queue_entry *e)
{
    QueueNode *pn;
    *e=pq->front->entry;
    pq->front=pn->next;
    free(pn);
    if(!pq->front)
    {
        pq->rear=NULL;
    }
    pq->size--;
}

void clear_queue(Queue *pq)
{
    while(pq->front)
    {
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
    pq->size=0;
}
