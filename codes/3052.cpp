#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[42] = {
        0,
    };

    int a;
    for (int i =0 ; i < 10; i++ ){
        cin >> a;
        
        arr[a%42] ++;
    }

    int count = 0;
    for(int i= 0; i< 42; i ++){
        if(arr[i] > 0)
            count++;
    }
    cout << count << endl;
}