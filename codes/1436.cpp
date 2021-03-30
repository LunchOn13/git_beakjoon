//https://www.acmicpc.net/problem/1436

#include<iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long tmp = 666;
    string a;
    while(n)
    {   
        a = to_string(tmp);
        if(a.find("666") != string::npos)
        {
            n--;
        }
        tmp++;
    }
    cout << a << endl;
    


}