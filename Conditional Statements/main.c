#include <stdio.h>
#include <stdlib.h>

//Getting the greatest num.
int max(int num1, int num2, int num3){
    int result;
    if(num1>=num2 && num1>=num3){
        result=num1;
    }else if(num2>=num1 && num2>=num3){
    result= num2;
    }else{
    result= num3;
    };
    return result;
}

//let's create a function to give remarks based on a users grade.Something we do in every programming basics class.

/*
- || represents 'OR'.
- && represents 'AND'.
- != represents 'not equals to'.
- ! represents 'NOT'.
- == represents 'equals to'.
- >= represents 'greater than or equal to'.
- <= represents 'Less than or equal to'.
*/
void getRemarks(){
    int marks;
    printf("Please Enter your grade out of 100: ");
    scanf("%d",&marks);//remember to use the ampersand. Scanf requires the address of the memory where the given input is to be stored.

    if(marks==100){
        printf("Perfect grade!!!");
    }else if(marks>=90 && marks<100){
        printf("Awesome grade!!!");
    }else if(marks>=70 && marks<90){
        printf("Very good grade!!!");
    }else if(marks>=50 && marks<70){
        printf("Good grade.");
    }else{
        printf("You need to try harder.");
    }
}


int main()
{
    printf("Conditional Statements in C.\n");
    printf("%d\n", max(12,15,18));
    getRemarks();
    return 0;
}
