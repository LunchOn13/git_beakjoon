#include<iostream>
using namespace std;

int main()
{
	int testcase;
	cin >> testcase;

	bool arr[10];
	char string[11];

	

	int result = 0;

	for (int i = 0; i < testcase; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			arr[i] = false;
		}

		cin >> string;

		for (int j = 0; string[j] != NULL; j++)
		{
			arr[string[j]-48] = true;
		}

		for (int i = 0; i < 10; i++)
		{
			if (arr[i] == true)
				result++;
		}
		cout << result << endl;
		result = 0;
	}



	return 0;
}