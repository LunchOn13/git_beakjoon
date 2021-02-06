#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string calc(int n, int count)
{
    int m = 1;
    while (true)
    {
        if (pow(n, m) >= count)
        {
            // m제곱 보다 아래로 내려가면서 하면됨
            break;
        }
        m++;
    }
    m -=1;

    string result = "";
    int ccount = count;
    while (m >= 0)
    {
        int p = pow(n, m);
        int tmp;
        if(p != 0)
            tmp= ccount / p;
        else
            tmp = 0;
        ccount -= p;

        char t = 'm';
        switch (tmp)
        {
        case 0:
            t = '0';
            break;
        case 1:
            t = '1';
            break;
        case 2:
            t = '2';
            break;
        case 3:
            t = '3';
            break;
        case 4:
            t = '4';
            break;
        case 5:
            t = '5';
            break;
        case 6:
            t = '6';
            break;
        case 7:
            t = '7';
            break;
        case 8:
            t = '8';
            break;
        case 9:
            t = '9';
            break;
        case 10:
            t = 'A';
            break;
        case 11:
            t = 'B';
            break;
        case 12:
            t = 'C';
            break;
        case 13:
            t = 'D';
            break;
        case 14:
            t = 'E';
            break;
        case 15:
            t = 'F';
            break;
        }
        result.push_back(t);
        m--;
    }
    return result;
}

string solution(int n, int t, int m, int p)
{
    string answer = "";
    int tubeCount = p; // 초기 튜브의 순서값
    int count = 0;

    while (t != 0)
    {
        string tmp = calc(n, count);
        int len = tmp.length();
        if (tubeCount > len)
        {
            tubeCount -= len;
            count++;
            continue;
        }
        // 여기는 tubeCount <= len임
        // 지금 나온 tmp에 답이 하나 들어가있음.
        answer.push_back(tmp[tubeCount - 1]); // -1 넣는게 맞냐?
        tubeCount = m;
        t--;
        count++;
    }

    return answer;
}

int main()
{
    int n, t, m, p;
    cin >> n >> t >>  m >> p;
    cout << solution(n, t, m, p);
}