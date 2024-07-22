#include <stdio.h>
/*
Funciton Pointers, point to code, on deref they execute code, also called callbacks
They don't have any data type unlike data pointer, they are void pointers

In data pointers, when we read/write data, the address that we operate on is floated on the data address bus
In function pointers, When dereferenced or used, the address is floated on the instruction address bus
Program counter is changed to the instruction that the function pointer was holding
*/
void func1()
{
    printf("Function 1\n");
}
void func2()
{
    printf("Function 2\n");
}

int main()
{
    void (*funcPtr)();  
/*   ^ void depicts that function pointer will return void

    data_type(*Pointer_name)(Input_data_type(s))
*/

    funcPtr = func1;        //this statement is same as funcPtr = & func1;     basically store the address of function1 at funcPtr
    funcPtr();              //dereferencing function pointer, we don't put * here for dereferencing it, and we didn't pass input arguments as we defined earlier that it taks no arguments

    funcPtr = func2;        //This calls the fuction
    funcPtr();


/*
    we use typedef with functon pointers heavily in code
    typedef creates custom data type of function pointer

    typedef void (*funcPtr)();  --> Now we have created a data type funcPtr, now we can't use funcPtr = func1; directly !!! because it is now a data type not name !

    Now we have to create a variable of that datatype as
            
             funcPtr fp;        --> here fp points to function pointer
             fp = func1;

             This make our lives easy as every we can define data type somewhat like a class, and make new short variables out of it instead writing that ugly code every time to define new variable

*/


/*--------------------------------------------------------------------------------------------------------------*/
/*  
                                    Function Pointer with input arguments
    void func1(int x, char y)
{
    printf("int %d  char %c\n", x, y);
}


int main()
{
    void (*funcPtr)(int, char);

    funcPtr = func1;
    funcPtr(33, 'q');

}
*/

}