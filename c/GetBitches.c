#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "GetBitches.h"
#include "bar.c"
#include "chicken.c"
#include "slow.c"
#define MAX_NAME_SZ 128

void nam()
{
  char name[MAX_NAME_SZ];
  char nameselect[3];
  while(1)
  {
    printf("What is your name?\n");
    scanf("%s", &name);
    printf("Your name is: %s? [Y/n] \n", name);
    scanf("%s", &nameselect);
    if(strcmp(nameselect, "y") == 0 || strcmp(nameselect, "Y") == 0 || strcmp(nameselect, "1") == 0)
    {
      break;
    }
  }
}

int main() {
  clear();
  nam();
  while(1)
  {
    input("Which route do you want to go?\n1. Slow and steady: More reliable, typically used for long-term relationships\n2. Get Bitches: Quick, great for one-night stands, almost guaranteed to fall off sometime in the next month\n");
    switch(choice)
    {
      case 1:
        printf("Have fun on your many dates to come!\n\n");
        slow();
        clear();
        input("Would you like to continue playing?\n\n1. Yes\n2. No\n");
        switch(choice)
        {
          case 2:
            exit(0);
          case 1:
            break;
          }
        break;
      case 2:
        printf("Want to get bitches real quick, I see... Good luck.\n\n");
        input("Where would you like to go?\n\n1. A bar\n2. A Chick-Fil-A\n");
        switch(choice)
        {
          case 1:
            bar();
            clear();
            printf("Would you like to continue playing? You have currently collected %d bitches out of 50.", BitchesCollected);
            input("\n\n1. Yes\n2. No\n");
            switch(choice)
            {
              case 2:
                exit(0);
              case 1:
                clear();
                break;
            }
            break;
          case 2:
            chicken();
            clear();
            printf("Would you like to continue playing? You have currently collected %d bitches out of 50.", BitchesCollected);
            input("\n\n1. Yes\n2. No\n");
            switch(choice)
            {
              case 2:
                exit(0);
              case 1:
                clear();
                break;
            }
            break;
        }
        break;
      default:
      printf("Input invalid. Please enter the number corresponding to one of the choices below:\n");
    }
  }
  return 0;
} 