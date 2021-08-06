
/* 
    This union represents all of the types, that you can pass into container 
    If you desire to add custom type, such as struct, you need to:

    1. Define header file (human.h), with data type inside
    2. Include this file here (#include "human.h")
    3. Add new variable type inside union type (human h)
   
    C understands what type you put inside union
*/
typedef union type
{
    int i;
    double d;
    char c;
    char *s;
} type;


