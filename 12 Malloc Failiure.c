#include <stdio.h>
#include <stdlib.h>

//Dynamic memory allocation failiure


#define SIZE 1*1024*1024*1025 //4GB
int main()
{
    int *p;

    //Allocating memory till heap is full, we also lose track of allocated regions and that leads to memory leak--> we allocate memory and forget to free it 

    for(int i=0;i<1000000000;i++)
    {
    p = (int*)malloc(SIZE);     //Here malloc returns a void pointer, so in order to use that we typecast itn thats why (int*)malloc

    printf("p: %p\n", p);

    if (p == NULL)
    return -1;
    }


}