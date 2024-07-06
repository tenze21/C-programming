#include <stdio.h>
#include <stdlib.h>

double cube(double num){
    double result= num * num * num;
    return result;
}
//double cube(double num) //Prototyping in C.
int main()
{
    printf("Functions\n");

    char name[20];
    printf("Please Enter your name:");
    scanf("%s", name);
    sayHi(name);

    printf("Answer: %f", cube(3.0));
    return 0;
}

// when declaring a function we also need to declare the return type i.e., the type of data the function is going to return.
// We use void to indicate that the function is not going to return anything.

void sayHi(char name[]){
    printf("Hello %s.\n", name);
}


/*Calling the cube() function after the main function gives error (error:conflicting types for 'cube') this is because C
 doesn't necessarily know the data type the function is taking and is supposed to return. It can be solved by protyping.*/

/*double cube(double num){
    double result= num * num * num;
    return result;
}*/
