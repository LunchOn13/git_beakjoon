#include<iostream>
using namespace std;


int arr[15][14];




int main()
{

	for (int i = 0; i < 14; i++)
	{
		arr[0][i] = i + 1;
		for (int j = 0; j < 14; j++)
		{
			arr[i + 1][j] = 0;
		}
	}
	
	for (int i = 1; i < 15; i++)
	{
		for (int j = 1; j < 15; j++)
		{
			for (int h = 0; h < j; h++)
			{
				arr[i][j-1] += arr[i - 1][h];
			}
		}
	}

	int testcase;
	cin >> testcase;

	int n, k;

	for (int i = 0; i < testcase; i++)
	{
		cin >> k;
		cin >> n;

		cout << arr[k][n-1] << endl;

	}




	return 0;
}