#include <stdlib.h>
#include "stack.h"

/* "Constructor" of Stack */
Stack createStack()
{
    Stack Container;
    Container.size = 0;
    return Container;
}

/* Add element of type to the end of Stack 
   addToStack(&Stack, (type)variable)
*/
void addToStack(Stack *Container, type val)
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

/* Return last element of Stack, and delete it. */
type backFromStack(Stack *Container)
{
    type data;
    size_t index = Container->size--;

    if(Container->size > 0) data = Container->data[index];
    else 
    {
        printf("No elements inside of container... \n");
        exit(EXIT_FAILURE);
    }

    
    /* Shift elements of allocated memory, one index lower */
    int i, j = 0;
    for(i = 1; i < Container->size; i++)
    {
        Container->data[j] = Container->data[i];
        j++;
    }

    /* Realocate this memory to new size */
    Container->size--;
    Container->data = realloc(Container->data, Container->size * sizeof(type));

    return data;
}

/* Return size of Stack */
size_t sizeOfStack(Stack *Container)
{
    return Container->size;
}

/* Free allocated memory from Stack data, and whole struct */
void deleteStack(Stack *Container)
{
    free(Container->data);
    free(Container);
}


