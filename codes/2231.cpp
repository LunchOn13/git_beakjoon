#include <iostream>

using namespace std;

int cut(int n)
{
    int result = 0;
    while (n >= 1)
    {
        result += n % 10;
        n /= 10;
    }
    return result;
}

int main()
{

    int n;
    cin >> n;

    int nn = n;
    int result = n;
    while (true)
    {
        int tmp;
        tmp = nn + cut(nn);
        if (tmp == n)
        {
            if (result > nn)
                result = nn;
        }
        if (nn < n/2)
            break;

        nn--;
    }
    if(result == n)
        cout << 0;
    else
        cout << result;
}