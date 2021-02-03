#include <iostream>

using namespace std;

int main() {   
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int arr[100] = {0,};
    for(int i = 0; i < n; i ++)
    {
        cin >> arr[i];
    }

    int tmp = -1;
    for(int i = 0; i < n-2; i ++)
    {
        for(int j = 1; j < n-1; j ++)
        {
            for(int k = 2; k< n; k ++)
            {
                int t;
                if( i == j || i == k || j == k)
                    continue;
                t = arr[i] + arr[j] + arr[k];
                if( t > tmp && t <= m)
                    tmp = t;
            }
        }
    }
    cout << tmp;
}