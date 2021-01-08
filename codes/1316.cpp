#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int testcase;
    cin >> testcase;

    int alphabet [26];
    string s;
    int result = 0;
    for(int i = 0; i < testcase; i ++)
    {
        fill_n(alphabet, 26, 0);

        cin >> s; 
        // string 순회
        char before = 'A';
        for (int j = 0 ; j < s.length(); j ++)
        {
            // 초기 세팅
            if(before == 'A') 
                before = s[0];
            else if( alphabet[(int)s[j] - 97] == -1)
            {
                // 끊겼던 알파벳이 다시 나올 경우
                // 지금 순회중인 string을 빠져나와 다음 testcase 로 가야함
                break;
            }
            
            if(before != s[j])
            {
                // 연속된 알파벳이 중단됨
                alphabet[(int)before - 97] = -1;
            }

            if (j == s.length()-1)
                result++;
            
            before = s[j];
        }




    }
    cout << result;

}