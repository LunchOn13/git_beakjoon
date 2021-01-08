#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n ;

    int result = 0;
    int arr[5001];
    fill_n(arr,5001, -1 );
    
    for (int a =0; a <= 1000; a++)
    {
        for (int b=0; b <= 1666; b++)
        {
            if(5*a + 3*b > 5000)
                continue;
            if(arr[5*a + 3*b] > a+b || arr[5*a + 3*b] == -1)
                arr[5*a+3*b] = a + b;
        }
    }

    cout << arr[n];
}