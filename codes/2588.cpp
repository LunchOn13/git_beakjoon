#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hund = b / 100;
    int ten = (b % 100) / 10;
    int one = ((b % 100) % 10);
    
    cout << a * one << endl;
    cout << a * ten << endl;
    cout << a * hund << endl;
    cout << a * b;

    return 0;
}