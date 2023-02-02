#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
//This program has many things to learn
//if forget anything see video on 5:38 min
int number;
int num=1;
int guess;
srand(time(0));
number = rand()%100 + 1;// Generates random number between 1 and 100;
//printf("The number is %d",number);//This is hide so we can not see the guessing number on screen

do{
    printf("Guess the number\n ");
    scanf("%d",&guess);
    if(guess<number)
    {
        printf("upper number please!\n");
    }
    else if(guess>number)
    {
        printf("Lower number please\n");
    }
    else
    {
        printf("You guessed right and  guessed it in %d attempts\n",num);
    
    
    }
    num++;

}
    while(guess!=number);


    return 0;
}