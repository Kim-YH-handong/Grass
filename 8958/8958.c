#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        char *input = malloc(sizeof(char)*80);
        int total = 0, x = 1;
        scanf("%s", input);
        for(int j = 0; j < strlen(input); j++){
            if(input[j] == 'O'){
                total += x;
                x++;
            }else{
                x = 1;
            }
        }
        printf("%d\n", total);
    }
}
/*
    stcmp() --> 같으면 0 return
*/