#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    int arr[1000001];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr + N);
    cout << arr[0] << "\n" << arr[N-1] << endl;
    return 0;
}
/*
Condition
1. 1 < N < 1,000,000 for first line: number of integer.
2. input integers with space.
사용한 것들
1. 숫자를 입력받아서 array를 제작하게 만들었다. [int *arr = new int(N)]
2. Insertion sorting 알고리즘을 사용하였다. 다양한 것들도 많지만 가장 기억에 남아서 사용.
가장 빠른 솔트 알고리즘은 Quick sorting이다. 
*/