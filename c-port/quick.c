#include "bitches.h"
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void quick()
{
  clear();
  printf("You are in a bar. You notice 3 girls. Which would you like to bang?\n");
  printf("1. A blonde with average-sized boobs. Given how she's drinking alone, she may have just gone through a breakup.\n2. A brunette with small boobs. She's hanging out with her friends, so she always has an excuse to leave.\n3. A redhead with larger breasts. She may be married, but you can't see a ring.\n");
  input("Your choice: ");
  switch(choice)
  {
    case 1:
      blonde();
      break;
    case 2:
      brunette();
      break;
    case 3:
      redhead();
      break;
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
      break;
  }
}

void brunette()
{
  printf("brunette\n");
}

void redhead()
{
  printf("redhead\n");
}