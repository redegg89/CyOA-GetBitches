#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "GetBitches.h"
#include "quick.c"
#include "slow.c"
#define MAX_NAME_SZ 128

void nam()
{
  char *name = malloc(MAX_NAME_SZ);
  char nameselect[3];
  while(1)
  {
    printf("What is your name?\n");
    fgets(name, MAX_NAME_SZ, stdin);
    if ((strlen(name) > 0) && (name[strlen (name) - 1] == '\n'))
    name[strlen (name) - 1] = '\0';
    //scanf("%s", name);
    printf("Your name is: %s? [Y/n] \n", name);
    scanf("%s", nameselect);
    //printf(nameselect);
    if(strcmp(nameselect, "y") == 0 || strcmp(nameselect, "Y") == 0)
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
      break;
    case 2:
      printf("Want to get bitches real quick, I see... Good luck.\n\n");
      quick();
      break;
    default:
    printf("Input invalid. Please enter the number corresponding to one of the choices below:\n");
  }
  }
  return 0;
} 

