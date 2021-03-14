//https://programmers.co.kr/learn/courses/30/lessons/60057

#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(string s)
{
    int answer = 9999;
    stack<string> st;

    // i는 스택에 넣을 문자열의 갯수
    if (s.length() == 1)
        return 1;
    for (int i = 1; i < s.length(); i++)
    {
        string tmp;
        int tmp_result = 0;
        for (int k = 0; k < s.length();)
        {
            tmp = "";
            for (int kk = 0; kk < i; kk++)
            {
                if (k + kk < s.length())
                    tmp.push_back(s[k + kk]);
            }
            if (st.empty())
                st.push(tmp);
            else
            {
                if (st.top() == tmp)
                {
                    st.push(tmp);
                }
                else // 다르면 stack에서 빼고 숫자를센다.
                {
                    int count = 0;
                    string ttop = st.top();
                    while (!st.empty())
                    {
                        st.pop();
                        count++;
                    }
                    if (count != 1)
                    {
                        while (count > 0)
                        {
                            count /= 10;
                            tmp_result += 1;
                        }
                    }
                    tmp_result += ttop.length();
                    st.push(tmp);
                }
            }
            k += i;
        }

        int cnt = 0;
        string ttop = st.top();
        while (!st.empty())
        {
            st.pop();
            cnt++;
        }
        if (cnt != 1)
        {
            while (cnt > 0)
            {
                cnt /= 10;
                tmp_result += 1;
            }
        }
        tmp_result += ttop.length();

        if (tmp_result < answer)
            answer = tmp_result;
    }

    return answer;
}

int main()
{
    string arr[10];
    arr[0] = "aabbaccc";
    arr[1] = "ababcdcdababcdcd";
    arr[2] = "abcabcdede";
    arr[3] = "abcabcabcabcdededededede";
    arr[4] = "xababcdcdababcdcd";
    arr[5] = "xxxxxxxxxxyyy";
    arr[6] = "a";
    arr[7] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    arr[8] = "zxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    arr[9] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxz";

    for (int i = 0; i < 10; i++)
    {
        cout << solution(arr[i]) << endl;
    }
}