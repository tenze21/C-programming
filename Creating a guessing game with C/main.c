#include <stdio.h>
#include <stdlib.h>

//To make the game a bit more interesting we will allow the computer to generate the random number.
//limit specifies the range of numbers you want to guess from i.e., 0-10, 0-100 or something like that.
//index specifies any random index of the resulting array.
int generateRandomNumber(limit,index){
    int numbers[limit];//initialize array
    int i=0;
    int j=1;
    //generate the array containing numbers from 0 to limit.
    while(i<=limit){
        numbers[i]=i;
        i++;
    }
    //shuffle the array.
    while(j<=5){
        int k=0;
        while(k<=limit-1){
            int temp=numbers[k];
            numbers[k]=numbers[k+1];
            numbers[k+1]=temp;
            k++;
        }
        j++;
    }
    return numbers[index];//return the number at the specified index.
}

int executeGame(char mode){
    int num;
    int userInput;//the number the user entered.
    int guessLimit=3;//number of times the player can guess.
    if(mode=='e'){
        num=generateRandomNumber(10,7);
        while(userInput!=num && guessLimit>0){
            printf("Guess the number from 0-10: ");
            scanf("%d", &userInput);
            guessLimit--;
        }
    }else if(mode=='m'){
        num=generateRandomNumber(50,21);
        while(userInput!=num && guessLimit>0){
            printf("Guess the number from 0-50: ");
            scanf("%d", &userInput);
            guessLimit--;
        }
    }else{
        num=generateRandomNumber(100,63);
        while(userInput!=num && guessLimit>0){
            printf("Guess the number from 0-100: ");
            scanf("%d", &userInput);
            guessLimit--;
        }
    }

    if(guessLimit==0){
        printf("Out of guesses, Please try again.");
    }else{
        printf("hurray! You got it right.");
    }
}
int main()
{
    printf("Number Guessing Game In C!\n");
    printf("\n");
    printf("This is a simple number guessing game made with the C programming language. You get three chances to guess the correct number. You can also choose the difficulty from easy, medium and hard. For easy mode the number lies between 0 and 10, for medium mode the number lies between 0 and 50 and for difficult mode the number lies between 0 and 100.\n");
    printf("\n");
    int range;
    char difficulty;
    int guessLimit=3;

    printf("Please choose a mode(enter 'e' for easy, 'm' for medium and 'h' for hard): ");
    scanf("%c", &difficulty);
    switch(difficulty){
    case 'e':
        executeGame('e');
        break;
    case 'm':
        executeGame('m');
        break;
    case 'h':
        executeGame('h');
        break;
    default:
        printf("Invalid game mode. Please restart the program.");
    }

    return 0;
}

//I wanted to make the game a bit interesting so I am generating a random number rather than hard coding it but the way I have done it isn't the best way since you can predict the number, I just built it with the knowledge I have acquired till here and I have also introduced a mode system where the player can choose the game mode.
