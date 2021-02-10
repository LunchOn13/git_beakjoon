#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> stk;
    
    for(int i = 0; i < moves.size(); i ++)
    {
        int turn = moves[i]-1;
        int tmp = 0;
        for(int j=0; j < board.size(); j ++)
        {
            if(board[j][turn] != 0)
            {
                // 인형체크
                tmp = board[j][turn];
                board[j][turn] = 0;
                break;
            }
        }
        if(tmp == 0)
            continue;
        // stk이 비어있다면
        if(stk.empty())
            stk.push_back(tmp);
        // stk에 무언가 있다면
        else
        {
            int stacked = stk.back();
            if(stacked == tmp)
            {
                stk.pop_back();
                answer+=2;
            }
            else
                stk.push_back(tmp);
            
        }
    }
    
    return answer;
}

int main()
{
    vector<vector <int>> arr = {{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}};
    vector<int> moves = {1,5,3,5,1,2,1,4};

    std::cout << solution(arr,moves);
}