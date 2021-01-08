#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    int count = 0;
    while(cin >> s){
        count ++;
    }
    cout << count;

}