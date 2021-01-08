#include<iostream>
#include<string>
using namespace std;


int main()
{
	string flatString;
	getline(cin, flatString);

	string key;
	cin >> key;

	char tmp;
	for (int i = 0; i < flatString.length(); i++)
	{
		int k = i%key.length();
		if (flatString[i] != ' ')
		{
			int fir = (int)flatString[i] - 97;
			int sec = (int)key[k] - 97;
			
			if (fir>sec)
			{
				flatString[i] = 96 + fir - sec;
			}
			else
			{
				flatString[i] = 122 - (sec - fir);
			}
		}
	}

	cout << flatString;

	return 0;
}