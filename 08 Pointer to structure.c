#include <stdio.h>
//Pointer to Structure

struct my_struct
{
    long long int a;    //Here ; semicolon after each line
    float b;
    int c;
};

int main()
{

struct my_struct var =  //This Equal to sign is important
{
    .a = 1024,          //Here , comma after each line
    .b = 2.5,
    .c = -1,
};

    struct my_struct *ptr = &var;
    ptr->a += 1;    //That's How we dereference Pointer to struct
    ptr->b += 1;
    ptr->c += 1;

    printf("%lld  %f  %d\n", ptr->a, ptr->b, ptr->c);
/*
    (*ptr).a is equal to ptr->a
*/

}