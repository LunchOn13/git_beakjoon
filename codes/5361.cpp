#include<iostream>
#include<iomanip>
#define arm 125.30
using namespace std;


int main()
{
	int testcase;
	cin >> testcase;

	const double blaster_rifle = 350.34;
	const double optical_secsor = 230.90;
	const double listening_sensor = 190.55;
	const double leg = 180.90;
	double result = 0;

	int a, b, c, d, e = 0;


	for (int i = 0; i < testcase; i++)
	{
		cin >> a >> b >> c >> d >> e;
		result = blaster_rifle*a + optical_secsor*b + listening_sensor*c + arm*d + leg*e;

		cout << "$" << fixed<<setprecision(2)<<result<<endl;
	}


	return 0;
}