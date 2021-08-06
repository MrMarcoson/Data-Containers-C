#include "type.h"

typedef struct Stack 
{
    size_t size;
    type *data;
} Stack;

/* "Constructor" of Stack */
Stack createStack();

/* Add element of type to the end of Stack 
   addToStack(&Stack, (type)variable)
*/
void addToStack(Stack *Container, type val);

/* Return last element of Stack, and delete it. */
type backFromStack(Stack *Container);

/* Return size of Stack */
size_t sizeOfStack(Stack *Container);

/* Free allocated memory from Stack data, and whole struct */
void deleteStack(Stack *Container);


