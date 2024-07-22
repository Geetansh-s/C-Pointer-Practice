#include <stdio.h>
//Pointer arithmetic

int main()
{
/*
    Pointers can only increment or decrement and addition/subtraction is not possible

*/
    int a[3] = {1,2,3};             //4x3 = 12 bytes total
    char b[3] = {'A', 'B', 'C'};    //1x3 = 3 bytes total

    int *pa = a;
    char *pb = b;
/*
    Incrementing int pointer by one increments it by 1*(sizeof pointer type)
    Incrementing int pointer will increment it by 4 bytes and char ptr by 1 byte
    double pointer will move it fwd/bckwrd by 8 bytes

    Struct pointer will jump by the size of the struct

    *(pa + 1) == pa[1]
*/

    printf("increment int pointer: %d, increment char pointer: %c \n\n", (*pa)+1, (*pb)+1);


}