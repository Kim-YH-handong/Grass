#include <stdio.h>
#include <string.h>

int main(){
    int T, R, j=0;
    char S[20];

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        j = 0;
        scanf("%d", &R);
        scanf("%s", S);
        while(strcmp(&S[j], "")){
            for(int x = 0; x < R; x++){
                printf("%c", S[j]);
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}