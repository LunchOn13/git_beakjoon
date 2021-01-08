#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    float arr [1000] = {0,};

    float max = -1;
    float hap = 0;
    for (int i = 0 ; i < n; i ++){
        cin >> arr[i];
        hap += arr[i];

        if( max < arr[i])
            max = arr[i];
    }
    float result = (hap / max) * 100 / n;
    // cout << setprecision(6) << result;
    cout << fixed << setprecision(2);
    cout << result;

}