#include <stdio.h>
#include <stdlib.h>
/*A struct can store varoius kinds of data and is used to represent a real life entity.*/
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};
int main()
{
    printf("Structs in C.\n");
    struct Student student1;//creating a instance of the student struct.
    student1.age=21;
    student1.gpa=3.5;
    /*student1.name="Tenzin";// doesn't work because in C the student1.name refers to the address of the first element of the name array
    which can't be changed(You can only change the content in that address). Here you are basically trying to change the address of the
    first element of the array. Refer understanding arrays in C for more.*/

    strcpy(student1.name, "Tenzin");//the strcpy method takes two arguments the destination(where do you you want to copy the string to) and the string you want to copy.
    strcpy(student1.major, "computer science");
    printf("%s\n", student1.name);
    printf("%d\n", student1.age);

    //creating another instance of student struct.
    struct Student student2;
    strcpy(student2.name, "Tshering");
    strcpy(student2.major, "medicine");
    student2.age=20;
    student2.gpa=4;

    printf("%s\n", student2.name);
    return 0;
}
