#include <stdio.h>
#include <string.h>

int main(){
    int output[26];
    char input[100];

    for(int i = 0; i < 26; i++){
        output[i] = -1;
    }

    scanf("%s", input);

    for(int i = 0; i < 100; i++){
        if(!strcmp(&input[i], "")){
            break;
        }else{
            int digit = input[i];
            digit = digit - 97;
            if(output[digit]==-1){
                output[digit] = i;
            }
        }
    }

    for(int i = 0; i < 26; i++){
        printf("%d ", output[i]);
    }
}