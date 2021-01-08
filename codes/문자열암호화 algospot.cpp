#include<iostream>
#include<string>

using namespace std;

int main()
{
	int testcase;
	string line;
	string nine[101];

	cin >> testcase;
	for (int z = 0; z < testcase; z++)
	{
		cin >> line;

		int number = line.length();

		int k = 0;
		for (int i = 0; 2*i < number; i++)
		{
			nine[k] = line[2 * i];
			k++;
		}

		for (int i = 1; 2*i-1 < number; i++)
		{
			nine[k] = line[2 * i - 1];
			k++;
		}

		for (int i = 0; i < number; i++)
			cout << nine[i];

		cout << endl;

	}


	return 0;
}