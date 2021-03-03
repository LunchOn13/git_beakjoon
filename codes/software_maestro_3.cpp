#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, e;
    cin >> n;
    cin >> m;
    cin >> e;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        arr.push_back(q);
    }

    // 시작점 찾기
    int less = 99999;
    bool check = true;
    int start;
    for (int i = 0; i < n; i++)
    {
        // 차이 값이 줄어들다가 커지는 순간 거기가 처음 먹을 곳이다.
        if (less >= abs(arr[i] - e))
        {
            less = abs(arr[i] - e);
            check = true;
        }
        else
            check = false;

        if (!check)
        {
            start = i-1;
            break;
        }
    }

    int result = 0;
    // 시작 점 start
    vector<int> arr2;
    while (m--)
    {
        // tmp 가 양수면 왼쪽으로 보너스 음수면 오른쪽으로 tmp만큼 보너스
        int tmp = arr[start] - e;
        
        arr2.push_back(arr[start]);
        e = arr[start];
        // e 의 위치에 따라 보너스 방향이 바뀌어야한다.
        arr.erase(arr.begin() + start);
        // 먹은걸 지워버리고 위치를 바꾼다.

        // 좌표가 넘어갈 수 있는걸 체크해야한다.
        int left, right;
        right = abs(arr[start] - e);
        left = abs(arr[start - 1] - e);

        // tmp 가 음수면 오른쪽에 보너스가 있따.
        if (tmp < 0)
        {
            right -= abs(tmp);
        }
        else
        {
            left -= abs(tmp);
        }
        // 같은 경우는 어떻게 예외처리를 하냐;;
        if (left < right)
        {
            start = start - 1;
        }
        else if (right < left)
        {
            start = start + 1;
        }
    }
    sort(arr2.begin(), arr2.end());
    cout << arr2[arr2.size() -1] - arr2[0];
}