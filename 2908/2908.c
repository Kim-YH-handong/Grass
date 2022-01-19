#include <stdio.h>

int main(){
    int first;
    int second;
    scanf("%d", &first);
    scanf("%d", &second);
    
    first = (first/100) + ((first/10)%10)*10 + ((first%100)%10)*100;
    second = (second/100) + ((second/10)%10)*10 + ((second%100)%10)*100;

    if(first > second)
        printf("%d", first);
    else
        printf("%d", second);
}