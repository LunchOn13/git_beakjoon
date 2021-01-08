#include <iostream>

using namespace std;

int isHan(int a){

    if ( a < 100) {
        return 1;
    }

    int tmp = a;
    int arr[4];
    fill_n(arr,4,-1);
    int i = 0;
    while(true){

        if (tmp < 1 )
            break;

        arr[i] = tmp % 10;
        tmp = tmp/10;
        i ++;
    }

    int gap = -100;
    for( int i = 0 ; i < 4; i ++){
        if(arr[i+1] == -1)
            return 1;
        
        if(gap == -100)
            gap = arr[i+1] - arr[i];
        
        if(gap != arr[i+1] - arr[i])
            return 0; // 등차수열 아님
        
        gap = arr[i+1] - arr[i];
    }

    return 1;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int result = 0;
    for(int i = 1; i <= n; i ++)
        result  += isHan(i);

    cout << result;

}