#include <stdio.h>

void sort(int arr[]);

int main(){
    int input, remainder[10], output = 0, i = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &input);
        remainder[i] = input%42;
    }

    sort(remainder);

    while(1){
        output++;
        while(remainder[i] == remainder[i+1] && i < 9){
            i++;
        }
        if(i == 9){
            break;
        }
        i++;
    }

    printf("%d", output);

    return 0;
}

void sort(int arr[]){
    int i, j, key;
    for(i = 1; i < 10; i++){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}