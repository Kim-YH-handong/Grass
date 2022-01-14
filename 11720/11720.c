#include <stdio.h>

int main(){
    int N, output=0;

    scanf("%d", &N);

    char input[N];

    scanf("%s", input);

    for(int i = 0; i < N; i++){
        int a = input[i] - '0';
        output = output + a;
    }

    printf("%d", output);

    return 0;
}