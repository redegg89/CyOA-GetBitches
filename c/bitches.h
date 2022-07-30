int BitchesCollected;
int CollectedBitches[6];
void AlreadyCollected(int id);
void story();
void bar();

void blonde();
void brunette();
void redhead();

void success(int id)
{
    if(CollectedBitches[id] != 1)
      {
        BitchesCollected++;
      }
      CollectedBitches[id] = 1;
}

void story(int id)
{
    switch(id)
    {
      case 0:
        blonde();
        break;
      case 1:
        brunette();
        break;
      case 2:
        redhead();
        break;
    }
}

void AlreadyCollected(int id)
{
  if(CollectedBitches[id] == 1)
  {
    input("You have already chosen this route. Would you like to proceed?\n\n1. Yes\n2. No\n");
    switch(choice)
    {
      case 1:
        story(id);
        break;
      case 2:
        bar();
        break;
        
    }
  }
  else
  {
    story(id);
  }
}
