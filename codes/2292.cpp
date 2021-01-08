#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int check = 1;

    int iter = 0;
    while(true){
        check += 6*iter;
    
        if(check >= n)
        {
            cout << iter+1;
            break;
        }
        iter ++;
    }
}