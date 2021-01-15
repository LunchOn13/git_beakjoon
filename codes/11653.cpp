#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);


    int n;
    cin >> n;

    if(n == 1)
        return 0;
    int count = 2;
    while(n != 1){
        if(n%count == 0)
        {
            n /= count;
            cout << count << endl;
            count = 2;
        }
        else{
            count++;
        }
        
    }
}