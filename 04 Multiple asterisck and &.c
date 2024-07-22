#include <stdio.h>

int main()
{
    int i = 230;

    printf("*&i: %d \t  *&*&i: %d  \t &i: %d \t\n", *&i, *&*&i, *&*&*&i);

/*
    * and & when used together cancel out each other, or 
    in other words it is saying that fetch me the conntents at the address of i, *(&i)
*/
}