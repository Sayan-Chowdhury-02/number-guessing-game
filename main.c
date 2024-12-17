#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int randomNumber = rand() %100 ;
    printf("%d\n", randomNumber);
    int userInput;
    int numberOfGuesses = 0;
    printf("!!!  GUESS THE NUMBER  !!!\n");
    printf("!!!  -RULES:-                    -  !!!\n");
    printf("!!!  - i) You have to guess      -  !!!\n");
    printf("!!!  -    a number               -  !!!\n");
    printf("!!!  - ii) We will return        -  !!!\n");
    printf("!!!  -     higher or lower based -  !!!\n");
    printf("!!!  -     on the given number   -  !!!\n");
do
{
    numberOfGuesses++;   
    printf("!!!  - Guess the number:  ");
    scanf("%d", &userInput);
    // printf("-  !!!\n");
    if (userInput==randomNumber)
    {
        printf("CONGRATULATIONS YOU HAVE WON");
    }
    else if (userInput > randomNumber)
    {
        printf("!!!  - The number is lower       -  !!!\n");
    }
    else if (userInput < randomNumber)
    {
        printf("!!!  - The number is higher      -  !!!\n");
    }
    
    } while (randomNumber != userInput);
    
    return 0;
}