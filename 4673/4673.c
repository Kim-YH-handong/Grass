#include <stdio.h>

int addNumber(int input){
    if(1000 <= input && input <= 10000){
        return (input/1000) + addNumber(input%1000);
    }else if(100 <= input && input <= 1000){
        return (input/100) + addNumber(input%100);
    }else if(10 <= input && input <= 100){
        return (input/10) + addNumber(input%10);
    }else{
        return input;
    }
}

int main(){
    int print, value=1;
    int nonSelf[10037] = {0};

    while(1){
        print = value + addNumber(value);
        nonSelf[print] = 1;
        value++;
        if(value == 10000)
            break;
    }
    
    for(int i = 1; i < 10000; i++){
        if(nonSelf[i]==0){
            printf("%d\n", i);
        }
    }

    return 0;
}

/*
    array 하나의 숫자로 가득 채우는 방법
    int nonSelf[1000] = {0}으로 선언하면 모두 0으로 가득 채워진다.
    알고리즘
    1. Create a function that add each number of digits.
    2. Declare 10037 array with 0 value. [This is because 9999 can create 10036 which is the possible maximum number created by the function.]
    3. Use while loop and change value of array that are not self number to 1.
    4. Print array that the value is 0.
*/
