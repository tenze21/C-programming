#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Switch Statements!\n");
    char grade='t';
    switch(grade){
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did alright!");
        break;
    case 'C':
        printf("You did poorly!");
        break;
    case 'D':
        printf("You did very bad!");
        break;
    case 'F':
        printf("You Fail!");
        break;
    default:
        printf("Invalid grade!");
    }
    return 0;
}
