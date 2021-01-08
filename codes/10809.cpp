#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr[26];
    fill_n(arr,26,-1);

    string s;
    cin >> s;
    for (int i = 0 ; i < s.length(); i++){
        int k = (int)s[i] - 97;
        if( arr[k] == -1)
            arr[(int)s[i] - 97] = i;
    }
    for( int j = 0; j < 26; j ++)
        cout << arr[j] << " ";
}