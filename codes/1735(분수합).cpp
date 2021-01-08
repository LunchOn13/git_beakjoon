#include<iostream>
using namespace std;

int main()
{
	long a, b;
	long _a, _b;

	cin >> a >> b >> _a >> _b;

	long a_r, b_r;

	a_r = a*_b + _a*b;
	b_r = b*_b;

	//gcd
	long i=a_r, j=b_r, k;

	if (i > j)
	{
		k = i;
		i = j;
		j = k;
	}

	while (1)
	{
		k = j%i;
		if (k == 0)
		{
			// gcd = i
			break;
		}
		else
		{
			j=i;
			i=k;
		}
	}

	a_r /= i;
	b_r /= i;

	cout << a_r << " " << b_r;

	return 0;
}