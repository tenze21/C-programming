#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to C calculator.\n");
    float num1;
    float num2;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter your second number: ");
    scanf("%f", &num2);

    printf("answer: %f", num1 + num2);
    return 0;
}
