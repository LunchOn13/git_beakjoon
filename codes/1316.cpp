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
        // string ��ȸ
        char before = 'A';
        for (int j = 0 ; j < s.length(); j ++)
        {
            // �ʱ� ����
            if(before == 'A') 
                before = s[0];
            else if( alphabet[(int)s[j] - 97] == -1)
            {
                // ����� ���ĺ��� �ٽ� ���� ���
                // ���� ��ȸ���� string�� �������� ���� testcase �� ������
                break;
            }
            
            if(before != s[j])
            {
                // ���ӵ� ���ĺ��� �ߴܵ�
                alphabet[(int)before - 97] = -1;
            }

            if (j == s.length()-1)
                result++;
            
            before = s[j];
        }




    }
    cout << result;

}