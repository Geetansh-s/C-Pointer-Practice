#include <stdio.h>

void main() {

int x[] = {11, 22, 33, 44};


    printf("  x: %p,  \n", x); 

        
    int *xptr = x;      //--> For an array, this way of pointing to array is the only correct option, as dereferencing the pointer will give u first value in array

    printf(" *xptr = x: %p,  %d \n",xptr ,*xptr ); 
    
     *xptr = &x;        //-->Thease will point to the first element of array but dereferencing them will give u garbage values

    printf(" *xptr = &x: %p,  %d \n",xptr ,*xptr ); 
    
     xptr = x;          //-->Thease will point to the first element of array but dereferencing them will give u garbage values


    printf(" xptr = x: %p,  %d \n",xptr ,*xptr ); 
    


    int y = 1023;

     int *yptr = &y;     //--> For an integer, this way of pointing to int is the only correct option

    printf(" *yptr = &y: %p,  %d \n",yptr ,*yptr );  
    
/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------
*ptr = array;:

This statement assigns the base address of the array to the pointer ptr. The array name array itself acts as a pointer to the first element of the array.
When you use *ptr = array;, ptr becomes a pointer pointing to the first element of array. So, *ptr would give you the value at the first element of the array.
----------------------------------------------------------------------------------------------------------------------------------------------------------------
*ptr = &array;:

This statement assigns the address of the array (not the base address of the array) to the pointer ptr.
The & operator is the address-of operator, so &array gives you the address of the entire array.
Assigning this address to *ptr would likely result in a compiler error or a warning because ptr is a pointer to a single element, not a pointer to an array. You would typically use ptr to point to a single element of array, not to the entire array itself.
----------------------------------------------------------------------------------------------------------------------------------------------------------------
In summary:

*ptr = array; assigns the base address of the array to the pointer ptr.
*ptr = &array; attempts to assign the address of the entire array to the pointer ptr, which is generally not what you intend to do in most situations.

*/
}

