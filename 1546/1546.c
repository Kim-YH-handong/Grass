#include <stdio.h>

void sort(float arr[], int N);

int main(){
    int N;
    float input[1000];
    float average = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%f", &input[i]);
    }

    sort(input, N);

    for(int i = 0; i < N; i++){
        average = average + ((input[i]/input[N-1])*100);
    }

    printf("\n%f", average/N);
}

void sort(float arr[], int N){
    int i, j, key;
    for(i = 1; i < N; i++){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}