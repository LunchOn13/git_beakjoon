#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int **arr = (int**)malloc(sizeof(int*)*n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = (int *)malloc(sizeof(int)*m);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	int line;
	cin >> line;

	for (int i = 0; i < line; i++)
	{
		int result = 0;
		int x, y, z, r;
		cin >> x >> y >> z >> r;

		x -= 1;
		y -= 1;
		z -= 1;
		r -= 1;
		for (int t = x; t <= z; t++)
		{
			for (int k = y; k <= r; k++)
			{
				result += arr[t][k];
			}
		}
		cout << result << endl;
	}


	return 0;
}