#include<stdio.h>
#include<stdlib.h>  // for malloc ,calloc ,realloc and free

int main()
{
    int *ptr = NULL;
    
    ptr = (int * )realloc(NULL, 10 * sizeof(int));      //it behaves like malloc

    // Use the memory
    
    ptr = (int *)realloc(ptr,0);        //free

    return 0;
}