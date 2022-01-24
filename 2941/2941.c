#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    int total, len;

    scanf("%s", input);

    len = strlen(input);
    total = len;

    for(int i = 0; i < len; i++){
        if(input[i] == 'c'){
            if(input[i+1] == '=' || input[i+1] == '-')
                total--;
        }else if (input[i] == 'd'){
            if(input[i+1] == '-')
                total--;
            else if(input[i+1] == 'z')
                if(input[i+2] == '=')
                    total--;
        }else if(input[i] == 'n' || input[i] == 'l'){
            if(input[i+1] == 'j')
                total--;
        }
        else if(input[i] == 'z' || input[i] == 's'){
            if(input[i+1] == '=')
                total--;
        }
    }

    printf("%d", total);

    return 0;
}