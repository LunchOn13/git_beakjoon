#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(int bl, int w, vector<int> tw) {
    int answer=0;
    vector<int> time;
    queue<int> weight;
    
    
    int now_w = 0;
    while(++answer)
    {
        //내리기
        if(!time.empty() && !weight.empty())
        {
            if(time[0] == 0)
            {
                now_w-= weight.front();
                weight.pop();
                time.erase(time.begin());
            }
        }
        
        //타기
        if(!tw.empty() && now_w < w && bl > weight.size())
        {
           
                if(now_w + tw[0] <=w)
                {
                    now_w += tw[0];
                    weight.push(tw[0]);
                    tw.erase(tw.begin());
                    time.push_back(bl);
                }
        }
        
        //time 감소
        if(!time.empty())
        {
            for(int i = 0 ; i < time.size(); i ++)
            {
                time[i]--;
            }
        }
        
        //종료
        if(tw.empty() && time.empty() &&weight.empty())
            break;
    }
    return answer;
}

int main()
{
    int bl = 2;
    int weight = 10;
    vector<int> arr = {7,4,5,6};

    cout << solution(2,10,arr);
}