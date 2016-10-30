#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	int testcase;
	cin >> testcase;

	float arr[40];
	for (int i = 0; i < testcase; i++)
	{
		int num;
		cin >> num;

		for (int j = 0; j < num; j++)
		{
			cin >> arr[j];
		}

		sort(arr,arr+num);

		float least = 0;
		if (num % 2 == 0)
		{
			for (int i = 0; i < num / 2; i++)
			{
				float that = (arr[i] + arr[num - 1-i]) / 2;
				if (least < that)
				{
					least = that;
				}
				
			}
		}
		else {
			least = arr[num / 2];
			for (int i = 0; i < num / 2; i++)
			{
				float that = (arr[i] + arr[num - 1-i]) / 2;
				if (least < that)
				least = that;
			}
		}
		cout << fixed << setprecision(1) << least << endl;
	}



	return 0;
}