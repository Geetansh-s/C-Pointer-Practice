#include <stdio.h>

//Pointer to datatype
int main()
{
        char            a = 'A';
        int             b = 1024;
        float           c = 1.0;
        long long int   d = 12345;

        char                     *pa = &a;
        int                      *pb = &b;
        float                    *pc = &c;
        long long int            *pd = &d;

        printf("sizeof (*pa): %lu sizeof (*pb): %lu sizeof (*pc): %lu sizeof (*pd): %lu\n\n",
         sizeof (*pa), sizeof (*pb), sizeof (*pc), sizeof (*pd));

/*
        Type of pointer specifies how many bytes it will dereference, i.e.
        it will go to the address of first byte and fetch the required bytes as specified
        char* --> 1 Byte,  int* -->4 bytes,  float* --> 4 Bytes, Long long int* --> 8 bytes

*/

}