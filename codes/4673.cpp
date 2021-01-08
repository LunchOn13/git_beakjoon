#include <iostream>

using namespace std;


int arr[10001] = {0,};

int d(int a) {

    if(a > 10000)
        return 0;
    int result = a;
    int tmp = a;
    while(tmp > 0){
        result += tmp %10;
        tmp /= 10;
    }
    if(result <10001)
        arr[result]++;
    return d(result);
}


int main (){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    for (int i = 1; i < 10001; i++){
        if(arr[i] == 0)
            d(i);
    }
    
    for ( int i = 1; i < 10001; i ++){
        if(arr[i] == 0 )
            cout << i << endl;
    }
}