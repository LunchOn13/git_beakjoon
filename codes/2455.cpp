#include<iostream>
using namespace std;

int main()
{
	int max=0;
	int out;
	int in;

	int now=0;
	for (int i = 0; i < 4; i++)
	{
		cin >> out;
		cin >> in;
		now = now - out + in;
		if (now > max)
		{
			max = now;
		}
	}

	cout << max;


	return 0;
}