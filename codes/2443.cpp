#include <iostream>
using namespace std;


int main()
{
	
	int numline;
	cin >> numline;

	for (int line = 0; line < numline; line++)
	{
		for (int blank = 1; blank <=line; blank++)
		{
			cout << " ";
		}
		for (int star = 1; star <=(2*numline-1) - 2 * line; star++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}