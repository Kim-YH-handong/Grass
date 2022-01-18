#include <stdio.h>
#include <string.h>

int main(){
    char input[1000000];
    int word=0;
    
    scanf("%[^\n]s", input);

    char *token = strtok(input, " ");

    while(token){
        word++;
        token = strtok(NULL, " ");
    }

    printf("%d", word);

    return 0;
}

/*
    space 포함에서 받는 4가지 방법
    1. gets(input);
    2. fgets(input, 1000000, stdin);
    3. scanf("%[^\n]s", input);
    4. scanf("%[^\n]*c", input);

*/