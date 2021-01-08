#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    int total = 0;
    for(int i = 0; i < s.length(); i++)
    {
        int the = (int)s[i] - 65;
        if(the == 18 || the == 21 || the >=24)
            the -=3;
        
        if(the < 0 || the > 30)
            the = 30;
        
        total += the/3 + 3;
    }
    cout << total;

}