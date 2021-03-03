#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int day = 0;
    while(progresses.size() != 0)
    {
        for(int i = 0; i < progresses.size() ; i++)
        {
            progresses[i] += speeds[i];
        }
        
        int result = 0;
        int prcount = progresses.size();
        for(int i = 0; i < prcount; i ++)
        {
            if(progresses[0] >= 100)
            {
                progresses.erase(progresses.begin());
                speeds.erase(speeds.begin());
                result++;
            }
            else
                break;
        }
        if(result > 0)
            answer.push_back(result);
    }
    return answer;
}

int main()
{
    vector<int> p = {99,99,99,99,99,99};
    vector<int> s = {1,1,1,1,1,1};
    
    vector<int> e = solution(p,s);
    for(int i = 0; i < e.size(); i++)
    {
        cout << e[i] << " ";
    }
}