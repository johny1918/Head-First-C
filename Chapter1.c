/*
* This is first chapter from book Head First C
* in this chapter we will learn about basics
* of language C.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
<<<<<<< HEAD
    char card_names[3];
=======
    char card_named[3];
>>>>>>> b04027c232bb07cc3a99e2824863611528179efa
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
        continue;

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
