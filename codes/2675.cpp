#include <iostream>
#include <string>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    for(int i =0; i < t; i ++){

        int r;
        string s;
        cin >> r >> s;

        for(int j = 0; j < s.length(); j ++)
        {
            for (int k=0; k < r; k++)
                cout << s[j];
        }
        cout << endl;

    }
}