//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a[50] = { 0 };
//	int b[50] = { 0 };
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> b[i];
//	}
//
//	sort(a, a + n);
//	sort(b, b + n);
//
//	int c[50] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		c[n-1 - i] = b[i];
//	}
//
//	long result = 0;
//	for (int i = 0; i < n; i++)
//	{
//		result += (a[i] * c[i]);
//	}
//
//	cout << result;
//
//
//}