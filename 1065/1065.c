#include <stdio.h>

int han = 0;

void hanSum(int n);

int main(){
    int input;
    scanf("%d", &input);
    for(int i = 1; i <= input; i++){
        hanSum(i);
    }
    printf("%d", han);
}

void hanSum(int n){
    if(n == 1000){
        return;
    }else if(100 <= n && n < 1000){
        int first = n/100;
        int second = (n%100)/10;
        int third = ((n%100)%10);
        if((third-second)==(second-first)){
            han++;
        }
    }else if(10 <= n && n > 100){
        han++;
    }else{
        han++;
    }
}