//https://programmers.co.kr/learn/courses/30/lessons/68645#
#include <string>
#include <vector>

#include <iostream>
using namespace std;

void down(vector<int> &answer, int count, int now_idx[],int cn_d)
{
    int minus;
    minus = cn_d + 2*cn_d;
    if(cn_d == 0)
        minus =1;
    for(int i = 0; i <count-minus; i++)
    {
        now_idx[1]+=i+1+cn_d;
        now_idx[0]++;
        answer[now_idx[1]] = now_idx[0];
    }
}

void shift(vector<int> &answer, int count, int now_idx[], int cn_s)
{
    for(int i = 0; i < count- cn_s; i++)
    {
        now_idx[1]++;
        now_idx[0]++;
        answer[now_idx[1]] = now_idx[0];
    }
}

void up(vector<int> &answer, int count, int now_idx[], int cn_u)
{
    int alpha = 0;
    int minus = 0;
    minus = 2 + 3*(cn_u-1);
    for(int i = count-minus; i > 0; i--)
    {
        now_idx[1] -= (count-cn_u+1 - alpha);
        now_idx[0]++;
        answer[now_idx[1]] = now_idx[0];
        alpha++;
    }
}

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 0; i < (n*(n+1))/2; i++)
        answer.push_back(0);
    
    cout <<"answer size " << answer.size() << endl;
    answer[0] = 1;
    int cn_d, cn_s, cn_u;
    cn_d = 0;
    cn_s = 0;
    cn_u = 1;
    int now_idx[2] = {1,0};
    for(int i = 0; i < n; i++)
    {
        if(i % 3 == 0)
        {
            down(answer, n,now_idx,cn_d);
            cn_d++;
        }
        else if( i% 3 == 1)
        {
            shift(answer,n-1-2*(cn_s),now_idx, cn_s);
            cn_s++;
        }
        else
        {
            up(answer,n,now_idx,cn_u);
            cn_u++;
        }
    }
    return answer;
}

int main()
{
    int arr[3];
    arr[0] = 6;
    arr[1] = 7;
    arr[2] = 100;

    for(int i = 0; i < 3; i ++)
    {
        vector<int> result = solution(arr[i]);
        for(int i = 0 ; i< result.size(); i++)
        {
            cout << result[i] << ", ";
        }
        cout << endl;
    }
}