#include<iostream>
using namespace std;
int main()
{
	int arr[1000];
	static int counter = 0;
	int number = 1;
	while(1)
	{
		for (int j = 0; j < number; j++)
		{
			arr[counter] = number;
			counter++;
			if (counter == 1000) break;
		}
		number++;
		if (counter == 1000) break;
	}
	int min, max;
	cin >> min >> max;

	unsigned long long total = 0;
	while (min != max+1)
	{
		total += arr[min-1];
		min++;
	}
	cout << total;




	return 0;
}