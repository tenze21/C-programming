#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userChar;
    printf("Enter a letter: ");
    userChar=getchar();
    printf("You chose %c\n", userChar);
    getchar();

    /*using putchar()*/
    char inputChar;
    printf("Enter a letter: ");
    inputChar=getchar();

    printf("You choose ");
    putchar(inputChar);

    return 0;
}
