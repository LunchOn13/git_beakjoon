#include <iostream>
#include <cmath>

using namespace std;


bool isS(int n){
    int t = sqrt(n);
    if( n == 1)
        return false;
    for( int i = 2 ; i <= t; i ++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 999;
    int count = 0;
    while(n!=0){
        cin >> n; 
        for(int i = n+1; i <= 2 * n; i ++)
        {
            if(isS(i))
                count ++;
        }
        if ( count == 0)
            return 0;
        cout << count << endl;
        count = 0;
    }

}