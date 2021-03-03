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
        // 거르기
        if ( b > h)
            continue;
        pair<int, int> p1(a, b);
        arr.push_back(p1);
    }

    sort(arr.begin(), arr.end(),compa);
    // arr 에서 각각의 pc 끼리 정렬 후 같은 pc 에서 큰 시간순으로 정렬됨

    for(int i=0; i < arr.size(); i ++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    // pc 대수 만큼 돈다.
    for(int i = 1; i < p+1; i ++)
    {
        cout << p << " ";
        int result = 0;
        // 일단 모든 배열을 찾아보면서 자기 pc 에 맞는것만 본다.
        for(int j = 0; j < n; j ++)
        {
            // 자기 pc 아니면 넘어가기
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