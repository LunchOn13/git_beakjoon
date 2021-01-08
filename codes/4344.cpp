#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int c;
    cin >> c;

    int arr[1000] = {0,};
    for (int i = 0; i < c; i++)
    {
        float t;
        cin >> t;
        float add = 0;
        for (int j = 0; j < t; j++)
        {   
            cin >> arr[j];
            add += arr[j];
        }
        float aver =add /t;

        float count = 0;
        for (int j = 0 ; j < t; j ++){
            if(arr[j] > aver)
                count++;
        }
        float result = count / t * 100;
        cout << fixed << setprecision(3) << result << "%" <<  endl;
    }
}