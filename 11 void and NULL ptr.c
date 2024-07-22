#include <stdio.h>

void main()
{
/*
    Void pointers are declared similar to pointer to data types, but we use void keyword

    int i = 10;
    void *ptr  = &i;

    We can't dereference it
    It simply holds address
    Data can only be extracted after typecasting void pointer
---------------------------------------------------------------------
NULL POINTERS

Any ptr pointing to zeroth address
Mostly at 0x0 we have nothing useful except the boot code, but we can't deref it to get something
on High level OS, deref can fail, segmentation fault

On bare metal or RTOS, when  Mem management is disabled, we can deref it

#define NULL (void *)0x0        //Treat null keyword as 0x0 location typecasted to null ptr


***************************************************************************************************
If there is a camera, it stores image data in some part of memory say camera buffer , then our application in linux kernel needs to access that data to process and display it, 
then we need to copy that data from memory using kernel to some other buffer, we know the address of camera buffer only, then we request kernel to copy the data, 
kernel does not know the type of data, it only knows src address, destination address, and the size, so using void pointers and typecasting it,
it wil figure out how many bytes to copy using which typecast 

*/


}