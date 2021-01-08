#include <iostream>

using namespace std;

int main(){

    // Ãþ ¹æ ¼Õ
    int t, h, w, n;
    cin >> t;

    int x, y;
    for( int i= 0; i< t; i ++){
        cin >> h >> w >> n;

        x = n%h > 0 ? n/h + 1 : n/h;
        y = n%h == 0 ? h : n%h;

        int result = y*100 + x;
        cout << result << endl;
    }
}