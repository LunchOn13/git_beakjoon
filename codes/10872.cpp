#include <iostream>

using namespace std;

int fac(int n)
{
    if( n == 1 || n == 0)
        return 1;
    return n-- * fac(n);
}

int main() {

    int n;
    cin >> n;
    
    cout << fac(n);

}