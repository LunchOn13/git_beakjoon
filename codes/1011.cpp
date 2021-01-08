#include <iostream>

using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int testcase;
    cin >> testcase;
    int x, y;
    for(int i =0; i < testcase; i++){
        cin >> x >> y;
        long long h = y - x;
        long long front = 0;
        long long back = 0;
        long long count =0;
        long long wholecount = 0;
        while(true){
            front ++;
            count++;
            wholecount += front;
            if(h <= wholecount)
            {
                cout << count << endl;
                break;
            }
            back++;
            count++;
            wholecount += back;
            if(h <= wholecount)
            {
                cout << count << endl;
                break;
            }
        }
    }

}
