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

    // ������ ã��
    int less = 99999;
    bool check = true;
    int start;
    for (int i = 0; i < n; i++)
    {
        // ���� ���� �پ��ٰ� Ŀ���� ���� �űⰡ ó�� ���� ���̴�.
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
    // ���� �� start
    vector<int> arr2;
    while (m--)
    {
        // tmp �� ����� �������� ���ʽ� ������ ���������� tmp��ŭ ���ʽ�
        int tmp = arr[start] - e;
        
        arr2.push_back(arr[start]);
        e = arr[start];
        // e �� ��ġ�� ���� ���ʽ� ������ �ٲ����Ѵ�.
        arr.erase(arr.begin() + start);
        // ������ ���������� ��ġ�� �ٲ۴�.

        // ��ǥ�� �Ѿ �� �ִ°� üũ�ؾ��Ѵ�.
        int left, right;
        right = abs(arr[start] - e);
        left = abs(arr[start - 1] - e);

        // tmp �� ������ �����ʿ� ���ʽ��� �ֵ�.
        if (tmp < 0)
        {
            right -= abs(tmp);
        }
        else
        {
            left -= abs(tmp);
        }
        // ���� ���� ��� ����ó���� �ϳ�;;
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