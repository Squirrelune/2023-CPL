//
// Created by 22130 on 2023/9/16.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    //print a rule of the game
    int high=100;
    int chance=7;
    printf("The computer will generate a random number between 1 and %d\n"
           "You have %d chances.",high,chance);
    //generate a random number

    srand(time(NULL)); //use current time as seed for random generator
    int secret = rand() % high + 1;
    //printf("the secret is %d\n",secret);
    while (chance > 0) {

        printf("Enter your guess.\n");
        int guess;
       //Let the player guess a number
        scanf("%d",&guess);
        //store the guess number
        //compare it with the secret,
        //and inform the player of the result
        if (guess == secret)
        {
            printf("You win!\n");
            break;
        }else if (guess > secret){
            printf("guess >secret\n");}
        else
        {printf("guess<secret\n");}
    }
    chance--;



}