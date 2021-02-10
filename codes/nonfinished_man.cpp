#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long hasing(string s)
{
    long long tmp =0;
    int length = s.length();
    for(int i = 0; i < length; i++)
    {
        tmp += (int)s[i] * pow(length-i,2) ;
    }
    return tmp;
}

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    vector<long long> tt;
    vector<long long> ttt;
    for(int i =0; i < participant.size(); i++)
    {
        tt.push_back(hasing(participant[i]));
    }for(int i =0; i < completion.size(); i++)
    {
        ttt.push_back(hasing(completion[i]));
    }
    vector<long long> tmp = tt;
    
    sort(tmp.begin(), tmp.end());
    sort(ttt.begin(), ttt.end());
    
    long long result = tmp[tmp.size()-1];
    for(int i =0; i <tmp.size()-1; i++)
    {
        if(tmp[i] != ttt[i])
        {  
            result = tmp[i];
            break;
        }
    }
    
    int index;
    for(int i =0; i<tt.size(); i++)
    {
        if(tt[i] == result)
        {
            index = i;
            break;
        }
    }
    answer = participant[index];
    
    return answer;
}