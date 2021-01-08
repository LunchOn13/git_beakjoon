#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (b < 45)
    {
        a -= 1;
        if (a < 0)
            a = 23;
        int c = b - 45;
        b = 60 + c;
    }
    else if (b == 45)
    {
        b = 0;
    }
    else
    {
        b -= 45;
    }

    cout << a << " " << b << endl;
}
