#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;


bool compa(const pair<int, int>&a, const pair<int,int>&b)
{
    if(a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int p, n ,h;

    cin >> p;
    cin >> n;
    cin >> h;

    vector<pair<int,int>> arr;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a;
        cin >> b;
        // �Ÿ���
        if ( b > h)
            continue;
        pair<int, int> p1(a, b);
        arr.push_back(p1);
    }

    sort(arr.begin(), arr.end(),compa);
    // arr ���� ������ pc ���� ���� �� ���� pc ���� ū �ð������� ���ĵ�

    for(int i=0; i < arr.size(); i ++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    // pc ��� ��ŭ ����.
    for(int i = 1; i < p+1; i ++)
    {
        cout << p << " ";
        int result = 0;
        // �ϴ� ��� �迭�� ã�ƺ��鼭 �ڱ� pc �� �´°͸� ����.
        for(int j = 0; j < n; j ++)
        {
            // �ڱ� pc �ƴϸ� �Ѿ��
            if(p != arr[j].first)
                continue;

            int mok = h;
            for(int k = j; k < n; k++)
            {
                if( p != arr[k].first)
                    continue;
                mok -= arr[k].second;

            }   
        }



    }
}