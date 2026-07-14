#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random,guess;
    int no_of_guess=0;
    srand(time (NULL)); //Seed random on the basis of current time

    printf("Welcome to Number Guessing Game!\n");
    
    random = rand()%100+1;
    /*rand() genretaes a random very large no. b/w 0 and 1 (1 is not included)
    So, we're going to divide it with 100 
    so, now the no. genrated(remainder) will be  between 0 to 99
    We add 1 to make it 0 to 100 */

//We use do-while loop when we have run atleat one iteration
 do 
 {
printf("Please enter a guess between 1 to 100:\n");
scanf("%d",&guess);
no_of_guess++;

if(guess<random)
{
    printf("Guess a larger number\n");
}
else if (guess>random)
{
    printf("Guess a smaller numeber\n");
}
else 
{
    printf("YOU SUCCESSFULLY GUESSED THE NUMBER IN %d TRIES \n", no_of_guess);
    printf("!!!CONGRATULATIONS!!!\n");
}


 }
 while (guess !=random);

 printf("Thanks for playing.\n");
 printf("Developed by : Jasmine Kaur");
    return 0;
}
