#include <stdlib.h>
#include "queue.h"

/* "Constructor" of queue */
Queue createQueue()
{
    Queue Container;
    Container.size = 0;
    return Container;
}

/* Add element of type to the end of queue */
void addToQueue(Queue *Container, type val)
{
    int index;

    /* Allocate memory for data and determine index*/
    if(Container->size == 0)
    {
        index = 0;
        Container->size++;
        Container->data = malloc(1 * sizeof(type));
    }

    else
    {
        index = Container->size;
        Container->size++;
        Container->data = realloc(Container->data, Container->size * sizeof(type));
    }

    Container->data[index] = val;
}

/* Return first element of queue, and delete it. */
type popFromQueue(Queue *Container)
{
    type data;
    data = Container->data[0];
    
    /* Shift elements of allocated memory, one index lower */
    int i, j = 0;
    for(int i = 1; i < Container->size; i++)
    {
        Container->data[j] = Container->data[i];
        j++;
    }

    /* Realocate this memory of new size */
    Container->size--;
    Container->data = realloc(Container->data, Container->size * sizeof(type));

    return data;
}

/* Return size of queue */
size_t sizeOfQueue(Queue *Container)
{
    return Container->size;
}

/* Free allocated memory from queue data, and whole struct */
void deleteQueue(Queue *Container)
{
    free(Container->data);
    free(Container);
}

