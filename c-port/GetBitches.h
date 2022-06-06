//char choice[5];
int choice;
char input(char in[]) {
    printf(in);
    scanf(" %d", &choice);
    //printf("Your choice: %d\n", choice);
}
void clear()
{
    #ifdef _WIN32
    system("cls");
    #else
    printf("\e[1;1H\e[2J");
    #endif
}