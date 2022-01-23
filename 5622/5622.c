#include <stdio.h>

int main(){
    char input[15];
    int total = 0;
    int i = 0;

    scanf("%s", input);

    while(input[i]){
        int count = input[i];
        if(65 <= count && count < 68){ //ABC
            total = total + 3;
        }else if(68 <= count && count < 71){ //DEF
            total = total + 4;
        }else if(71 <= count && count < 74){ //GHI
            total = total + 5;
        }else if(74 <= count && count < 77){ //JKL
            total = total + 6;
        }else if(77 <= count && count < 80){ //MNO
            total = total + 7;
        }else if(80 <= count && count < 84){ //PQRS
            total = total + 8;
        }else if(84 <= count && count < 87){ //TUV
            total = total + 9;
        }else if(87 <= count && count < 91){ //WXYZ
            total = total + 10;
        }
        i++;
    }

    printf("%d", total);
    return 0;
}