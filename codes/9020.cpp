#include <iostream>
#include <cmath>

using namespace std;

bool isS(int n){
    if( n == 1 )
        return false;
    int s = sqrt(n);
    for(int i = 2 ; i <= s; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main (){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    for(int i = 0 ; i  < t; i ++ ){
        int n;
        cin >> n;

        int half = n/2;
        if(isS(half)){
            cout << half << " " << half << endl;
        }
        else
        {
            int result;
            for (int j = half; j > 0; j--)
            {
                if(isS(j) && isS(n-j))
                {   
                    result = j;
                    break;
                }
            }
            cout << result << " " << n - result << endl;
        }
        
    }
}