#include <iostream>

using namespace std;

int main() {

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b, v;
    int day = 0;
    cin >> a >> b >> v;

    day = (v-b)/(a-b);
    if((v-b)%(a-b) > 0)
        day++;

    cout << day;
}