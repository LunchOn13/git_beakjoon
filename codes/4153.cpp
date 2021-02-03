#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b, c;
    while(cin >> a >> b >> c){
        if( a == 0 && b == 0 && c == 0)
            break;
        int d;
        if( a > b)
        {
            d = b;
            b = a;
            a = d;
        }  
        if( b > c )
        {
            d = b;
            b = c;
            c = d;
        }
        // a <= b < c;
        a = pow(a, 2);
        b = pow(b, 2);
        c = pow(c, 2);
        if ( a + b == c )
            cout << "right\n";
        else
            cout << "wrong\n";
    }

}