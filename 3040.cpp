//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[9] = { 0 };
//	
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int sum=0;
//	for (int i = 0; i < 9; i++)
//	{
//		sum += arr[i];
//	}
//
//	int sub = sum-100;
//
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (sub == arr[i] + arr[j])
//			{
//				for (int k = 0; k < 9; k++)
//				{
//					if (k == i || k == j)
//						continue;
//					cout << arr[k]<<endl;
//				}
//				return 0;
//			}
//		}
//	}
//	
//}