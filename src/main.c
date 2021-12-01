 //Ex15 - Game
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(){


int num = 0;
int random;
int attempts = 15;

printf ("  ||=========================================||\n");
printf ("  ||========= WELCOME TO MASTERMIND =========||\n");
printf ("  ||=========================================||\n\n");
    Sleep(1000);
printf ("  <<======== Author: David Pedragosa ========>>\n");
printf (" --------------------------------------------------\n\n");
    Sleep(500);
    srand(time(NULL));
    random = 1000+rand()%9000;

printf (" GUESS THE SECRET NUMBER BETWEEN 1000 - 9999\n");
printf ("          YOU ONLY HAVE 15 LIVES\n\n\n");
    Sleep(500);

printf ("Press 'Enter' to start: \n\n");
getch();

    do{     
            printf("[%02d] ", attempts);
            attempts--;
            
            printf(" Insert a number: ");
            scanf("%d",&num);
            Sleep(500);
            
            if (num<random)
            printf(" Aim Higher.\n\n");

            else if (num>random)
            printf(" Aim Lower.\n\n");

    } while ((num != random) && (attempts > 0));
            if (num==random){
                printf(" Winner!!!\n\n");
            }else printf(" GameOver.\n\n");
            printf(" The secret number was : %d ",random);

getch();
return (0);
}