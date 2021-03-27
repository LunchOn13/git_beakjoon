#include <iostream>
#include <string>

using namespace std;
//https://www.acmicpc.net/problem/1018

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    string arr[n];

    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        arr[i] = tmp;
    }

    int result = n*m;
    int result_a = 0;

    for (int h = 0; h <= n - 8; h++)
    {
        for (int w = 0; w <= m - 8; w++)
        {
            for (int i = 0; i < 64; i++)
            {
                char tmp = arr[(int)i / 8 + h][i % 8 + w];

                if ((i + (i / 8)) % 2 == 0)
                {
                    if (tmp == 'B')
                        result_a++;
                }
                else
                {
                    if (tmp == 'W')
                        result_a++;
                }
            }
            if( result_a > 64-result_a)
                result_a = 64-result_a;

            if( result > result_a)
                result = result_a;
            result_a = 0;
        }
    }
    cout << result << endl;
}