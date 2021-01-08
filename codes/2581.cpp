#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{

    int m, n;
    cin >> m >> n;
    int result = 0;
    int smaller;
    for (int i = m; i <= n; i++)
    {
        if (isPrime(i) && i != 1)
        {
            if (result == 0)
                smaller = i;
            result += i;
        }
    }
    if (result == 0)
        cout << -1;
    else
    {
        cout << result << endl;
        cout << smaller << endl;
    }
}