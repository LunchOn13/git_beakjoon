#include<iostream>
#include<string>
using namespace std;


int main()
{
	int testcase;
	cin >> testcase;

	string sentence;
	for (int i = 0; i < testcase; i++)
	{
		cin >> sentence;
		
		for (int j = 0; j < sentence.length(); j++)
		{
			if (sentence[j] == '%')
			{
				if (sentence[j + 1] == '2')
				{
					if (sentence[j + 2] == '0')
						cout << " ";
					else if (sentence[j + 2] == '1')
						cout << "!";
					else if (sentence[j + 2] == '4')
						cout << "$";
					else if (sentence[j + 2] == '5')
						cout << "%";
					else if (sentence[j + 2] == '8')
						cout << "(";
					else if (sentence[j + 2] == '9')
						cout << ")";
					else if (sentence[j + 2] == 'a')
						cout << "*";

					j += 2;
				}
			}
			else
				cout << sentence[j];
		}
		cout << endl;
	}

}