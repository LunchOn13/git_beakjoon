#include<iostream>
#include<string>
using namespace std;




int main()
{
	int testcase;
	cin >> testcase;

	string s;
	for (int i = 0; i < testcase; i++)
	{
		int result = 0;
		cin >> s;
		int counter = 1;
		
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == 'O')
			{
				result += counter;
				counter++;
			}
			else
			{
				counter = 1;
			}
		}
		cout << result << endl;
	}
	return 0;
}