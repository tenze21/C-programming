#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    float GPA;
    printf("Enter your GPA: ");
    scanf("%f", &GPA);
    printf("Your GPA is %f\n", GPA);
    getchar();

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("your gpa is %f\n", gpa);
    getchar();

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c\n", grade);
    getchar();


    char name[20];
    printf("Enter your name: ");
    scanf("%s", name); /*We do't have to use the ampersand infront of the name*/
    printf("Your name is %s", name);

    char name1[20];
    printf("Enter your name: \n");
    fgets(name1, 20, stdin);/*fgets takes three arguments the variable you want to store the input in, the size of the input and where you want
    to get the input from(the standard input in this case).*/
    printf("Your name is %s", name1);

    return 0;
}
