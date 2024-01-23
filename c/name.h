#define MAX_NAME_SZ 256
char *nam()
{
  char *nam = malloc(MAX_NAME_SZ);
  char nameselect;
  while(1)
  {
    printf("What is your name?\n");
    scanf("%s", nam);
    printf("Your name is: %s? [Y/n] \n", nam);
    scanf(" %s", &nameselect);
    if(nameselect == 'y' || nameselect == 'Y' || nameselect == '1')
    {
      return nam;
    }
  }
}