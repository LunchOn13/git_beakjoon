#include <iostream>
using namespace std;

int main()
{
	int testcase;
	int numcount;
	int num;
	int count=0;
	

	cin >> testcase;

	while (count < testcase)
	{
		int result = 0;
		cin >> numcount;
		for (int i=0; i < numcount; i++)
		{
			cin >> num;
			result += num;
		}
		cout << result << endl;
		count++;
	}
	return 0;
}