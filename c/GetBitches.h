int choice;
char input(char in[]) {
    printf("%s", in);
    scanf(" %d", &choice);
    while(getchar() != '\n');
    return 0;
}
void clear()
{
    #ifdef _WIN32
    system("cls");
    #else
    printf("\e[1;1H\e[2J");
    #endif
}