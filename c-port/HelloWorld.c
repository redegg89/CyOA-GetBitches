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
        if(nameselect == "y" || nameselect == "Y")
        {
            break;
        }
    }
}

void main() {
  nam();
  input("Which route do you want to go?\n1. Slow and steady: More reliable, typically used for long-term relationships\n2. Get Bitches: Quick, great for one-night stands, almost guaranteed to fall off sometime in the next month\n");
  if(choice == "1")
  {
     printf("Have fun on your many dates to come!\n");
  }
  if(choice == "2")
  {
     printf("Want to get bitches real quick, I see... Good luck.\n");
  }
} 

