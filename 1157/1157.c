#include <stdio.h> 
#include <string.h> 
int main(){ 
    int i, j, max, result=0, len; 
    char arr[1000000]; 
    int cnt[26] = {0, }; 
    int select = 0; 
    
    scanf("%s", arr); 
    len = strlen(arr); 
    //소문자 체크하기
    for(i = 'a'; i <= 'z'; i++){ 
        for(j = 0; j < len; j++){ 
            if(i == arr[j])
                cnt[i-'a']++; 
        } 
    }
    
    //대문자 체크하기
    for(i = 'A'; i <= 'Z'; i++){
        for(j = 0; j < len; j++){
            if(i == arr[j]) 
                cnt[i-'A']++;
        }
    } 
    
    //임의로 첫번째 숫자 max로 가정하기
    max = cnt[0]; 
    
    //cnt 안에 숫자 비교하며 max 찾아내기
    //max의 값을 select의 저장하기
    for(i = 1; i < 26; i++){ 
        if(max < cnt[i]){ 
            max = cnt[i]; 
            select = i; 
        } 
    } 
    
    //max 숫자가 cnt안에 몇번 반복되는지 체크하기 나중에 ? 또는 알파벳 출력 구분하기 위해서
    for(i = 0; i < 26; i++){ 
        if(max == cnt[i]) 
            result++; 
    } 

    if(result > 1) 
        printf("?\n"); 
    else 
        printf("%c", select+'A'); 
    
    return 0;
}

/*
 출처: https://travelerfootprint.tistory.com/26
*/
