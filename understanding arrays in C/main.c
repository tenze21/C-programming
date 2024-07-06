#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Understanding arrays in C\n");
    /*In C when you declare an array the name of the array points to the first element of the array*/
    int nums[]={1,2,3,4,5};//here nums points to the address of the first element of the array.
    int *ptr= nums;
    printf("%d\n", ptr);//prints the memory address of the first element of the array in decimal notation.
    printf("%d\n", *ptr);//output: 1

    //The example below shows that the name of the array points at the first element of the array.
    printf("%p\n", (void*)nums);//prints the memory address of the first element of the array.
    printf("%p\n", (void*)&nums[0]);//prints the memory address of the first element of the array.
    return 0;
}
