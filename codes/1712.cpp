#include <iostream>

using namespace std;

int main() {

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;

    int cb = c - b;
    if ( cb <= 0)
        cout << -1;
    else
    {
        int result = a/cb;
        result++;

        cout << result;
    }

}