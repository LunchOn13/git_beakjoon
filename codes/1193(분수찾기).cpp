#include<iostream>
using namespace std;

int main()
{
	unsigned int input;
		cin >> input;
		unsigned int n = 1;
		unsigned int k = 1;
		while (true)
		{
			if (n >= input)
			{
				break;
			}
			k++;
			n += k;
		}
		if(k%2==1)
		{
			cout << 1 + (n - input) << "/" << k - (n - input) << endl;
		}
		else
		{ 
			cout << k - (n - input) << "/" << 1 + (n - input) << endl;
		}
			return 0;
	}
	
