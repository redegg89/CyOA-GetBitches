#include "bitches.h"
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void bar()
{
  clear();
  printf("You are in a bar. You notice 3 girls. Which would you like to bang?\n");
  printf("1. A blonde with average-sized boobs. Given how she's drinking alone, she may have just gone through a breakup.\n2. A brunette with small boobs. She's hanging out with her friends, so she always has an excuse to leave.\n3. A redhead with larger breasts. She may be married, but you can't see a ring.\n");
  input("Your choice: ");
  switch(choice)
  {
    case 1:
      AlreadyCollected(0);
      break;
    case 2:
      AlreadyCollected(1);
      break;
    case 3:
      AlreadyCollected(2);
      break;
    default:
    printf("Input invalid. Please enter the number corresponding to one of the choices below:\n");
  }
}

void blonde()
{
  printf("You have chosen the blonde. How would you like to approach her?\n1. \"Wanna fuck?\"\n2. \"You alright?\"\n3. \"Mind if I join you?\"\n");
  input("Your choice: ");
  switch(choice)
  {
    case 1:
      printf("Sure.\n");
      #ifdef _WIN32
      Sleep(1000);
      #else
      sleep(1);
      #endif
      clear();
      printf("Congratulations! You got laid!\n");
      success(0);
      break;
    case 2:
      printf("I was just crying. Does it look like I'm okay?\n1. \"Alright fine. I'll leave you alone.\"\n");
  }
}

void brunette()
{
  printf("brunette\n");
  success(1);
}

void redhead()
{
  printf("redhead\n");
  success(2);
}