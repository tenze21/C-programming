#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("While Loops in C!\n");
    int i=1;
    //while loop
    while(i<=5){
        printf("%d\n", i);
        i++;
    };

    //do-while loop.
    int j=1;
    do{
        printf("%d\n", j);
        j++;
    }while(j<=5);
    return 0;
}
