#include <iostream>

using namespace std;

int first(int a, int b, int c)
{

    int d = a + b;
    return d % c;
}

int secon(int a, int b, int c)
{
    int d = a % c;
    int dd = b % c;

    return (d + dd) % c;
}

int third(int a, int b, int c)
{
    int d = a * b;
    return d % c;
}

int forth(int a, int b, int c)
{
    int d = a % c;
    int dd = b % c;
    return (d * dd) % c;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << first(a, b, c) << endl;
    cout << secon(a, b, c) << endl;
    cout << third(a, b, c) << endl;
    cout << forth(a, b, c) << endl;
    return 0;
}