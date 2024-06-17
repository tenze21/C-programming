#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arrays in C\n");
    int nums[]={1,2,3,4};
    //printf("%d", nums);  cannot print the whole array. C does not have built-in support for printing complex data structures like
    //arrays like we do in other high level languages. We need to iterate through the array and print each value individually.
    printf("%d\n", nums[2]);

    //changing values
    nums[0]=12;
    printf("%d\n", nums[0]);

    //assigning values dynamically
    int dNums[10];
    dNums[0]=2;
    printf("%d\n", dNums[0]);

    // strings as arrays.
    char name[20]="Tenzin Choda";
    printf("%s\n", name[3]);//z
    printf("%s\n", name);//Tenzin Choda

    char person[10]={'T', 'e', 'n', 'z', 'e'};
    printf("%s\n", person);//Tenze
    return 0;
}
