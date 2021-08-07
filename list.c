#include <stdlib.h>
#include "list.h"

/* "Constructor" of List */
List createList()
{
    List Container;
    Container.size = 0;
    return Container;
}

/* Add element of type to the end of List */
void addToList(List *Container, type val)
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

void addToListAt(List *Container, size_t index, type val);

/* Return first element of List, and delete it. */
type popFromList(List *Container)
{
    type data;

    if(Container->size > 0) data = Container->data[0];
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

/* Return first element of List*/
type firstFromList(List *Container)
{
    type data;

    if(Container->size > 0) data = Container->data[0];
    else 
    {
        printf("No elements inside of container... \n");
        exit(EXIT_FAILURE);
    }

    return data;
}

/* Return last element of List*/
type lastFromList(List *Container)
{
    type data;
    size_t index = Container->size--;

    if(Container->size > 0) data = Container->data[index];
    else 
    {
        printf("No elements inside of container... \n");
        exit(EXIT_FAILURE);
    }

    return data;
}

/* Get element at index */
type getFromList(List *Container, size_t index)
{
    type data;

    if(Container->size > 0) data = Container->data[index];
    else 
    {
        printf("No elements inside of container... \n");
        exit(EXIT_FAILURE);
    }

    return data;
}

/* Return size of List */
size_t sizeOfList(List *Container)
{
    return Container->size;
}

/* Free allocated memory from List data, and whole struct */
void deleteList(List *Container)
{
    free(Container->data);
    free(Container);
}

