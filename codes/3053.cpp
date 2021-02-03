#include <iostream>
#include <cmath>

using namespace std;


int main(){
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    float r;
    cin >> r;

    cout.precision(6);
    cout << fixed << pow(r,2.0) * M_PI << endl;
    cout << fixed << pow(r,2.0) * 2;
}