#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> large_picture = {};

// 해당 영역의 size 반환
int check_area(int m, int n,int now_area , int x, int y)
{
    int result = 0;
    // 범위 체크
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

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
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
    
    // 예외 처리 몇개 놓친듯함

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