#include<iostream>
using namespace std;

int main()
{
	char word[1000001] = { '\0' };

	unsigned long int arr[26] = { 0 };

	cin >> word;

	int i = 0;
	while (word[i] != '\0')
	{
		if (word[i] > 90)
		{
			word[i] -= 32;
		}
		arr[(word[i] - 65)]++;
		i++;
	}
	
	int max = arr[0];
	for (int i = 0; i < 26; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	int counter = 0;
	int result;
	for (int i = 0; i < 26; i++)
	{
		if (max == arr[i])
		{
			counter++;
			result = i;
			if (counter == 2)
			{
				cout << '?';
				return 0;
			}
		}
	}

	cout << (char)('A' + result);

	return 0;
}