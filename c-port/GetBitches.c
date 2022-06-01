#include <stdio.h>
#include <string.h>
#include "GetBitches.h"
//#include "quick.h"
//#include "slow.h"

char name[20];

void nam()
{
    char nameselect[3];
    while(1)
    {
        printf("What is your name?\n");
        scanf("%s", name);
        printf("Your name is: %s? [Y/n] \n", name);
        scanf("%s", nameselect);
        printf(nameselect);
        if(strcmp(nameselect, "y") == 0 || strcmp(nameselect, "Y") == 0)
        {
            break;
        }
    }
}

void main() {
  nam();
  input("Which route do you want to go?\n1. Slow and steady: More reliable, typically used for long-term relationships\n2. Get Bitches: Quick, great for one-night stands, almost guaranteed to fall off sometime in the next month\n");
  while(1)
  {
    if(strcmp(choice, "1") == 0)
    {
        printf("Have fun on your many dates to come!\n");
        break;
    }
    else if(strcmp(choice, "2") == 0)
    {
        printf("Want to get bitches real quick, I see... Good luck.\n");
        break;
    }
    else
    {
        printf("Input invalid. Please enter either 1 or 2.\n");
        input("Which route do you want to go?\n1. Slow and steady: More reliable, typically used for long-term relationships\n2. Get Bitches: Quick, great for one-night stands, almost guaranteed to fall off sometime in the next month\n");
    }
  }
} 

