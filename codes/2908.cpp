#include <iostream>
#include <cmath>

using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b;

    cin >> a >> b;
    
    int ra, rb = 0;
   
   ra = (a%10) * 100 + (a%100)/10*10 + a/100;
   rb = (b%10) * 100 + (b%100)/10*10 + b/100;
    
    int result = (ra > rb) ? ra : rb;
    cout << result;
    

}