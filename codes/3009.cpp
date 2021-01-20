#include <iostream>

using namespace std;

int main (){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[6] = {0,};

    for(int i = 0; i < 6; i ++){
        cin >> arr[i];
    }
    int a, b = 0;

    a = arr[0];
    b = arr[2];
    if( a == arr[4])
        cout << b << " ";
    else if (b == arr[4])
        cout << a << " ";
    else
        cout << arr[4] << " ";
    a = arr[1];
    b = arr[3];
    if( a== arr[5])
        cout << b;
    else if (b == arr[5])
    {
        cout << a;
    }
    else
        cout << arr[5];
    
   
}