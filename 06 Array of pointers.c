#include <stdio.h>
#include <stdlib.h>

//We are using dynamic memory allocation from heap

int main()
{
    char *p[10]; //Array of pointers

    for (int i=0; i<10; i++)
    {
        p[i] = (char *)malloc(1); //Allocate 10 bytes and store their addresses to array of ptrs
        *p[i] = 10 - i;   //Store numbers from 10 to 0 in descending order in the addresses pointed to by the pointers (deref and store)
        printf("p[%d]: %p \n", i, p[i]);// Print address of each allocated byte
    }

    for (int i=0;i<10;i++)
    {
        printf("dereferencing *p[%d]:  %d\n", i, *p[i]);
    }

    printf("size of p[] : %lu\n", sizeof(p));

    for (int i=0;i<10;i++)
    {
        free(p[i]);
    }

}