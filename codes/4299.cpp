#include<iostream>
using namespace std;

int main()
{
	int big;
	int small;

	cin >> big;
	cin >> small;

	int x, y;

	x = (big + small) / 2;
	y = (big - small) / 2;

	if (big != (x + y))
	{
		cout << "-1";
	}
	else 
	{
		cout << x << " " << y;
	}






	return 0;
}