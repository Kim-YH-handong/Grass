#include <stdio.h>

int main(){
    int input[9], max = 0, index = 0;

    for(int i = 0; i < 9; i++){
        scanf("%d", &input[i]);
    }

    for(int i = 0; i < 9; i++){
        if(max < input[i]){
            max = input[i];
            index = i + 1;
        }
    }

    printf("%d\n%d", max, index);

    return 0;
}