#include<iostream>
#include<iomanip>
#define pounds 2.2046
#define kilograms 0.4536
#define gallons 0.2642
#define liters 3.7854
using namespace std;

void print(int testcase,float num, int Case)	// case 1 : kg / case 2 : lb / case 3 : g / case 4 : l
{
	cout << testcase << " " <<fixed <<setprecision(4) <<num << " ";
	switch (Case)
	{
	case 1:
		cout << "lb" << endl;
		break;

	case 2:
		cout << "kg" << endl;
		break;

	case 3: 
		cout << "l" << endl;
		break;

	case 4:
		cout << "g" << endl;
		break;
	}
}


int main()
{
	int testcase;
	cin >> testcase;

	float num;
	char type[3];
	for (int i = 1; i <= testcase; i++)
	{
		cin >> num >> type;


		if (type[0]=='k'&&type[1]=='g')
		{
			print(i, num*pounds, 1);
		}
		else if (type[0] == 'l'&&type[1]=='b')
		{
			print(i, num*kilograms, 2);
		}
		else if (type[0] == 'g')
		{
			print(i, num*liters, 3);
		}
		else if (type[0] == 'l'&&type[1]!='b')
		{
			print(i, num*gallons, 4);
		}
	}
	return 0;
}