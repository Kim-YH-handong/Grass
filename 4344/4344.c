#include <stdio.h>
#include <stdlib.h>

void findRatio(int input[], float average, int N);

int main(){
    int C, N;
    float average = 0, percent = 0;

    scanf("%d", &C);

    for(int i = 0; i < C; i++){
        average = 0;
        scanf("%d", &N);
        int *input = malloc(sizeof(int)*N);
        for(int j = 0; j < N; j++){
            scanf("%d", &input[j]);
            average = average + input[j];
        }
        average = average/N;
        findRatio(input, average, N);
        free(input);
    }

}

void findRatio(int input[], float average, int N){
    float over = 0;
    for(int i = 0; i < N; i++){
        if(input[i] > average){
            over++;
        }
    }
    printf("%.3f%%\n", (over/N)*100);
}

/**
 * malloc 쓰려면 stdlib.h 필요.
 * % 쓰려면 %% 이렇게 두개 입력해줘야 함.
 * pointer로 malloc 했을 경우 free를 통해서 데이터 할당을 없앨 수 있음.
 */