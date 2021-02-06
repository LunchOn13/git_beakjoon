#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    int x [50] = {0,};
    int y [50] = {0,}; 
    int result [50]; fill_n(result, 50, 1);
    for(int i = 0 ; i < n; i ++)
    {
        cin >> x[i] >> y[i];
    }
    
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j++)
        {
            if(x[i] < x[j] && y[i] < y[j])
                result[i] ++;
        }
    }

    for (int i =0; i <n; i ++)
        cout << result[i] << " ";
        
}