#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "name.h"
#ifdef SDL
#include "AudioPlayer.h"
#else
#include "PlayerAudio.h"
#endif
#include "redegglibs.h"
#include "bar.c"
#include "chicken.c"
#include "slow.c"
#include "RPG/rpg.c"

char *name;

int main(int argc, char *argv[]) {
  if(argc > 1)
  {
    if(!strcmp(argv[1], "RPG"))
    {
      rpgStart();
      exit(0);
    }
  }
  //playSound("res/bgm1.wav", 1, 0);
  clear();
  name = nam();
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