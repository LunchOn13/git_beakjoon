#include<iostream>
using namespace std;


int main()
{
	int line;
	cin >> line;
	int _line;
	_line = line;
	for (int i = 0; i < line; i++)
	{
		for (int blank = _line-1; blank > 0; blank--)
		{
			cout << " ";
		}
		for (int star = 0; star < i+1; star++)
		{
			cout << "*";
		}
		cout << endl;
		_line--;
	}
	_line = line;
	for (int i = 0; i < line - 1; i++)
	{
		for (int blank = 0; blank < i + 1; blank++)
		{
			cout << " ";
		}
		for (int star = _line-1; star > 0; star--)
		{
			cout << "*";
		}
		cout << endl;
		_line--;
	}








	return 0;
}