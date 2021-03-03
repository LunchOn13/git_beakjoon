#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    int arr[91] = {0,};
    for(int i = 0; i < skill.length(); i++)
    {
        arr[(int)skill[i]] = i+1;
    }
    
    
    vector<int> check;
    for(int i = 0; i < skill_trees.size(); i ++)
    {
        check.clear();
        for(int j = 0; j < skill_trees[i].length(); j ++)
        {
            int tmp = (int)skill_trees[i][j];
            if(arr[tmp] != 0)
                check.push_back(arr[tmp]);
        }
        
        bool success = true;
        for(int j = 0; j < check.size(); j++)
        {
            if(check[j] != j+1)
            {
                success = false;
                break;
            }
        }
        if(success)
            answer++;
        
    }
    
    return answer;
}

int main()
{
    string skill = "CBD";
    vector<string> skill_trees= {"BACDE","CBADF","AECB","BDA"};
    cout << solution(skill, skill_trees);

}