#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(void)
{
    srand((unsigned int) time(NULL));
    int maxim=100;
    int target=rand()%(maxim+1);
    int guess;
    int  attempt=0;
    printf("Welcome to the number guessing game!\n");
    printf("Im thinking of a number between 0 and %d\n",maxim);
    while (1)
    {
        printf("Enter your guess : ");
        if (scanf("%d",&guess)!=1)
        {
            fprintf(stderr,"Invalid Input");
            int c;
            while (c==  getchar()!='\n' && c!=EOF){}
            continue;
        }
        attempt++;
        if (guess==target)
        {
            printf("Congratulations! You guessed the correct number %d in %d attempts!\n",target,attempt);
            break;
        }else if (guess<target)
        {
            printf("Too low!\n");
        }else
        {
            printf("Too high!\n");
        }

    }
    return 0;

}