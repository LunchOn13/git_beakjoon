#include<iostream>
using namespace std;


int main()
{
	int coupon;
	int k;
	int chick = 0;
	while (cin >> coupon >> k) {
		chick = 0;
		chick = coupon;

		while (true)
		{
			chick += coupon / k;
			coupon = coupon / k + coupon % k;

			if (coupon / k == 0)
				break;
		}
		cout << chick << endl;

	}

	return 0;
}