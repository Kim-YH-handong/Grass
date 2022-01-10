#include <stdio.h>

long long sum(int *a, int n);

int main(){
    int a[1000001];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    sum(a, n);
    return 0;
}

long long sum(int *a, int n){
    long long returnValue = 0;  
    for(int i = 0; i < n; i++){
        returnValue = a[i] + returnValue;
    }
    printf("%lld", returnValue);
    return returnValue;
}