#include <iostream>
using namespace std;
int main(){
    int testCaseNumber, input;
    int N[42] = {1, 0};
    for(int i = 2; i < 42; i++){
        N[i] = N[i-1] + N[i-2];
    }
    cin >> testCaseNumber;
    for(int i = 0; i < testCaseNumber; i++){
        cin >> input;
        if(input == 0){
            cout << "1 0" << endl;
        }else{
            cout << N[input] << " " << N[input + 1] << endl;
        }
    }
    return 0;
}
/*
조건 Memory = 128, 0<N<40
풀이법
1. 어떻게서든 제공된 fibonacci를 구현해서 출력을 해보았다. (메모리 노상관, 시간 노상관)
2. 출력을 해보니 0과 1에 대한 패턴이 보였다.
3. 그 패턴을 이용하여 Recursion으로 했었던 fibonacci를 단순히 for문으로 변경 할 수 있었다.
*/