#include<iostream>
using namespace std;

int main()
{
	char plate[50];

	cin >> plate;

	int height = 10;
	for (int i = 1; plate[i] != '\0'; i++)
	{
		if (plate[i - 1] == plate[i])
		{
			height += 5;
		}
		else if (plate[i - 1] != plate[i])
			height += 10;
	}
	cout << height;


	return 0;
}