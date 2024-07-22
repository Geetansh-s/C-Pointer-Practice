#include <stdio.h>

void main() {

    char name_array[] = "GEETANSH";
    char *ptr = "geetansh";
/*
    Both Char array and char pointer are same i.e. both will point to first letter
*/
/*1. Similarity between char pointer and char array */

    printf("name_array:  %s, name_array:  %p, *name_array:  %c\n",
             name_array, name_array, *name_array);
    printf("ptr:  %s, ptr:  %p, *ptr:  %c\n",
             ptr, ptr, *ptr);
/*2. Difference between array and char ptr*/

    int x[] = {10, 11, 12};
    int *xptr = x;

    printf("sizeof(xptr) = %lu, sizeof(x) = %lu\n", sizeof(xptr), sizeof(x));
    /*
        The pointer will occupy 8 bytes because of x64 arch,
        Array will take up 12 bytes as 4 bytes per integer * 3 integers
        Character array will occupy one additional byte due to null char at end
    */

/*3. Array can't be reassigned but pointer can be */

    int a[] = {22, 33, 44};
//  a = x;   ----> This can't be done gcc will throw error
//  a = &x   ----> This can't be done gcc will throw error
    *xptr = a;

    /*
    The output of the following code snippet will be:

    char arr[] = "inpyjama";
    printf("%s, %c", arr, arr[2]); ------> inpyjama, p   Will be the correct answer


}
    
    */
}