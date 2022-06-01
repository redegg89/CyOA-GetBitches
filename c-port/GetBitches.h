char choice[1];
char input(char in[]) {
    printf(in);
    scanf("%s", choice);
    //printf("Your choice: %s\n", choice);
    return choice[1];
}