/*
* This is second chapter from book Head First C
* in this chapter we will learn about basics
* of language C.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void go_south_east(int *lat,int *lon)
{
    *lat-=1;
    *lon+=1;
}

void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n",msg);
    printf("Message occupies %d bytes\n",sizeof(msg));
    printf("Message is storred at %p",&msg);
}

void skip(char *msg)
{
    puts((msg + 6));
}

int main()
{
    char cards[]="JQK";
    char a_card=cards[2];
    cards[2]=cards[1];
    cards[1]=cards[0];
    cards[0]=cards[2];
    cards[2]=cards[1];
    cards[1]=a_card;
    puts(cards);
    return 0;
}
