#include <stdio.h>

//Multiple pointers ar used in filesystems wherein one array of pointers will point to some other nodes and so on to store data

int main()
{
    int       i = 10;
    int     *pi = &i;
    int   **ppi = &pi;
    int ***pppi = &ppi;

    printf("%p, %p, %p, %p\n", &i, pi, ppi, pppi);

/*
pi is a pointer that points to an int
ppi is a pointer that points to a pointer that points to an int
pppi --> ppi --> pi -->i

***pppi when used in printf along with %d, dereferences i and gives me 10
*/
}