#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    int x1, y1, r1, x2, y2, r2;
    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int sr,br;
        if( r1 > r2){
            sr = r2;
            br = r1;
        }
        else
        {
            sr = r1;
            br = r2;
        }
        double r3 = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
        if( r1 + r2  == r3)
            cout << 1 << '\n';
        else if( r1 + r2 < r3)
            cout << 0 << '\n';
        else if( r1 + r2 > r3)
        {
            if( r1 == r2 && r3 == 0)
                cout << -1 << '\n';
            else if(sr + r3 < br){
                cout << 0 << '\n';
            }
            else if(sr + r3 == br)
                cout << 1 << '\n';
            else{
                cout << 2 << '\n';
            }
        }
        else if(sr + r3 == br)
            cout << 1 << '\n';
    }
}