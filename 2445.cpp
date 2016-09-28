//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int line;
//	cin >> line;
//	int _line;
//	_line = line;
//
//	for (int i = 0; i < line; i++)
//	{
//		for (int star = 0; star < i + 1; star++)
//		{
//			cout << "*";
//		}
//		for (int blank = 2*_line-2; blank > 0; blank--)
//		{
//			cout << " ";
//		}
//		for (int star = 0; star < i + 1; star++)
//		{
//			cout << "*";
//		}
//		_line -= 1;
//		cout << endl;
//	}
//
//	_line = line;
//	for (int i = 1; i <= line - 1; i++)
//	{
//		for (int star = _line - 1; star > 0; star--)
//		{
//			cout << "*";
//		}
//		for (int blank = 0; blank < 2 * i; blank++)
//		{
//			cout << " ";
//		}
//		for (int star = _line - 1; star > 0; star--)
//		{
//			cout << "*";
//		}
//		_line -= 1;
//		cout << endl;
//		
//	}
//
//
//
//	return 0;
//}