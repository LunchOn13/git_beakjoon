#include <iostream>

using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a, b, c;

    cin >> a >> b >> c;

    int arr[10] = {0,};
    int moder;
    int counter;
    int dest = a * b * c;
    moder = dest;
    while(moder > 0){

        counter = moder % 10;
        arr[counter]++;

        moder /=10;
    }

    for(int i = 0 ; i < 10; i ++){
        cout << arr[i] << endl;
    }

}