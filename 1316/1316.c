#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    int total = N;

    for(int i = 0; i < N; i++){
        char input[100];
        int alphabet[26] = {0};
        int j = 0;
        char buffer;

        scanf("%s", input);

        while(input[j]){
            if(input[j] != input[j-1]){
                int index = input[j] - 'a';
                alphabet[index]++;
            }
            j++;
        }
        for(int i = 0; i < 26; i++){
            if(alphabet[i] >= 2){
                total--;
                break;
            }
        }
    }

    printf("%d", total);
}