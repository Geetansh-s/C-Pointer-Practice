#include <stdio.h>

void main() {

    char c = 'A';
    char *ptr = &c;

    // char *ptr means pointer will point to char type of data
    // & is address of operator, it gives address of variable or pointer
    // * after char denotes that it is a pointer (only at the time of defining pointer
    /* Elsewhere * denotes dereference operator,
       i.e. Decode the contents at the address that pointer points to
    */
   /*
       There Can be as much space between data type and asterick 
       but asterick must fall between data type and ptr name
   */  

    /*
        i & j -> bitwise anding of two integers only (error if one is ptr)
        i && j ->bitwise anding int with address of j (Will still get error)
        i & (int)&j -> address of j typecasted to integer type, will get succesfull anding  
    */

       /*
        i * ptr                ->Multiply two integers only (error if one is ptr)
        i ** ptr OR i *(*ptr)  ->multiply int with contents of the address pointed by ptr
    */
   // In a 32-bit machine, dereferencing a character pointer (char *p) would fetch 1 Byte
   // because we have nothing to do with ptr as we are fetching data and char in 32 bit machine is of 1 byte
   // In a 32-bit machine, dereferencing a integer pointer (int *p) would fetch 4 Bytes


    printf("c=%c, &c=%p\n", c, &c); //Print content of c and location of c
    printf("ptr=%p\n", ptr); //Print value of pointer i.e. address of c (0x7ffc45390)
    printf("ptr=%p\n", &ptr); //Print address of pointer variable
    printf("*ptr=%c\n", *ptr); //Dereference the ptr, i.e Contents of variable ptr is pointing to i.e the char 'A'

}