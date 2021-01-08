#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int prime){

    if(prime == 1)
        return false;
    double sq =sqrt(prime);
    int count = 2;
    while(count <= sq)
    {
        if(prime % count == 0)
            return false;
        count ++;
    }
    return true;
}


int main() {

    int testcase;
    cin >> testcase;

    int prime;
    int result = 0;
    for(int i =0; i < testcase; i ++){
        cin >> prime;
        if(isPrime(prime))
            result++;
    }
    cout << result;

}