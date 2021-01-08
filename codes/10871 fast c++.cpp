#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n,x;
    cin >> n >> x;

    for (int i = 0 ; i < n; i ++){
        int t;
        cin >> t;
        if( t < x )
            cout << t << " ";
    }
}