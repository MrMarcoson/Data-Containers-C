#include <stdlib.h>
#include <stdio.h>
#include "type.h"

typedef struct Queue 
{
    size_t size;
    type *data;
} Queue;

/* "Constructor" of queue */
Queue createQueue();

/* Add element of type to the end of queue 
   addToQueue(&queue, (type)variable)
*/
void addToQueue(Queue *Container, type val);

/* Return first element of queue, and delete it. */
type popFromQueue(Queue *Container);

/* Return size of queue */
size_t sizeOfQueue(Queue *Container);

/* Free allocated memory from queue data, and whole struct */
void deleteQueue(Queue *Container);


