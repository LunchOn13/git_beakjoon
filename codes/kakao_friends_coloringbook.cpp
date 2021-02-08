#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> large_picture = {};

// �ش� ������ size ��ȯ
int check_area(int m, int n,int now_area , int x, int y)
{
    int result = 0;
    // ���� üũ
    if(x < 0 || x >= m || y < 0 || y >= n)
        return 0;

    if(large_picture[x][y] == now_area)
        large_picture[x][y] = -large_picture[x][y];
    else
        return 0;
    
    
    result += check_area(m,n,now_area,x+1,y);
    result += check_area(m,n,now_area,x,y+1);
    
    result += check_area(m,n,now_area,x,y-1);
    result += check_area(m,n,now_area,x-1,y);

    return result+1;
    
    // maybe error
    return -1;
}

// ���� ������ ������ ��� �Լ� ���� �ʱ�ȭ �ڵ带 �� �ۼ����ּ���.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    
    large_picture = picture;
    
    
    for(int i =0; i < m; i++)
    {
        for(int j =0 ;j < n; j++)
        {
            if(large_picture[i][j] <= 0)
                continue;
            int re = check_area(m, n, large_picture[i][j], i, j);
            if( re > 0)
            {
                number_of_area++;
                if( re > max_size_of_one_area){
                    max_size_of_one_area = re;
                }
            }
        }
    }
    
    // ���� ó�� � ��ģ����

    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}

int main()
{

    int m = 6;
    int n = 4;
    vector<vector<int>> ppp ={{1, 1, 1, 0}, {1, 2, 2, 0}, {1, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 3}, {0, 0, 0, 3}};
    vector<int> result;
    result = solution(m,n,ppp);
    cout << result[0] << result [1];
}