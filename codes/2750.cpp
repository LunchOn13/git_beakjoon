#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int number;
	cin >> number;
	vector<int> arr(number);

	for (unsigned int i = 0; i < arr.size(); i++)
	{
		cin >> number;
		arr[i] = number;
	}
	sort(arr.begin(),arr.end());
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}