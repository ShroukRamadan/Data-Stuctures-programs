#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

typedef int queue_entry;

typedef struct queuenode
{
    queue_entry entry;
    struct queuenode *next;

}QueueNode;

typedef struct queue
{
    QueueNode *front;
    QueueNode *rear;
    int size;
}Queue;





#endif // QUEUE_H_INCLUDED
