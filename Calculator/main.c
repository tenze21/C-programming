#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to C calculator.\n");
    double num1;
    double num2;
    char operator;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter a operator: ");
    scanf(" %c", &operator);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(operator=='+'){
        printf("Sum: %f", num1 + num2);
    }else if(operator=='-'){
        printf("Difference: %f", num1 - num2);
    }else if(operator=='*'){
        printf("Product: %f", num1 * num2);
    }else if(operator=='/'){
        printf("Quotient: %f", num1 / num2);
    }else{
        printf("Invalid operator.");
    }
    return 0;
}
