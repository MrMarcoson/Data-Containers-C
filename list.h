#include "type.h"

typedef struct List 
{
    size_t size;
    type *data;
} List;

/* "Constructor" of List */
List createList();

/* Add element of type to the end of List */
void addToList(List *Container, type val);

/* Add element of type to the index */
void addToListAt(List *Container, size_t index, type val);

/* Add element to front of the list */
void addToListFront(List *Container, type val);

/* Return first element of List, and delete it. */
type popFromList(List *Container);

/* Return last element of List, and delete it. */
type backFromList(List *Container);

/* Return first element of List*/
type firstFromList(List *Container);

/* Return last element of List*/
type lastFromList(List *Container);

/* Get element at index */
type getFromList(List *Container, size_t index);

/* Return size of List */
size_t sizeOfList(List *Container);

/* Free allocated memory from List data, and whole struct */
void deleteList(List *Container);


