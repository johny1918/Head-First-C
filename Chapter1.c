/*
* This is a first chapter from book HeadFirst C
* in this chapter we will learn about basic
* the goal of this file is to traverse the book.
*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char card_name[3];
    int counter=0;
    while(card_name[0] != 'X')
    {
     puts("Enter the card_name: ");
     scanf("%2s",card_name);
     int val=0;
     switch(card_name[0])
     {
        case 'K':
        case 'J':
        case 'Q':
        val=10;
        break;

        case 'A':
        val=11;
        break;

        case 'X':
        break;

        default:
         val=atoi(card_name);
         if(val < 1 || val > 10)
         {
            puts("I dont understand that value!");
            continue;
         }
     }
     if(val <= 6 && val >= 3)
        counter++;
     else if(val==10)
        counter--;
    printf("Current counter: %d\n",counter);
    }

    return 0;
}
