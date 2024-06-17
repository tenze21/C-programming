#include <stdio.h>
#include <stdlib.h>
/*C comments*/
int main()
{
    /*variable declaration and data types in c*/
    char name[]="Tenzin\n";/*The square brackets are used to indicate that a group of characters will be stored in the variable.*/
    printf("%s\n", name);

    char var[]={'T', 'e', 'n', '\0'};/*you can construct a string manually like this. The '\0' at the end of the array is used to indicate the end
    of the string and is known as the null terminator.*/
    printf("%s\n", var);

    float num=1.09;
    printf("%f\n", num);

    char letter='A';
    printf("%c\n", letter);

    int integer=60;
    printf("%d\n", integer);

    /*Math operations in C.*/
    printf("%f\n", pow(2,3));
    printf("%f\n", sqrt(9));
    printf("%f\n", ceil(4.56));
    printf("%f\n", floor(4.56));

    /*modifying value*/
    int mynum=5;
    printf("%d\n", mynum);
    mynum=7;
    printf("%d\n", mynum);

    /*Constants*/
    const int NUM2=10;/*Good practice to write constants in uppercase*/

    getchar();
    return 0;
}
