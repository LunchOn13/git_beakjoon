//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int testcase;
//	cin >> testcase;
//
//	int acounter = 0;
//	int bcounter = 0;
//
//	int arr[3][2];
//	for (int k = 0; k < testcase; k++)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 2; j++)
//			{
//				cin >> arr[i][j];
//			}
//		}
//
//		// arr [x][0] Àº x ÁÂÇ¥
//		// arr [y][1] Àº y ÁÂÇ¥
//
//		acounter = 0;
//		bcounter = 0;
//		int x1= arr[0][0];
//		int y1 = arr[0][1];
//		for (int j = 0; j < 3; j++)
//		{
//			if (x1 ==arr[j][0])
//			{
//				acounter++;
//			}
//			else bcounter++;
//		}
//		switch (acounter)
//		{
//		case 1:
//			cout << x1;
//			break;
//		default:
//			break;
//		}
//
//		switch (bcounter)
//		{
//		case 1:
//			for (int j = 0; j < 3; j++)
//			{
//				if (x1 != arr[j][0])
//					cout << arr[j][0];
//			}
//		default:
//			break;
//		}
//		cout << " ";
//
//		acounter = 0;
//		bcounter = 0;
//
//		for (int j = 0; j < 3; j++)
//		{
//			if (y1 == arr[j][1])
//			{
//				acounter++;
//			}
//			else bcounter++;
//		}
//		switch (acounter)
//		{
//		case 1:
//			cout << y1;
//			break;
//		default:
//			break;
//		}
//
//		switch (bcounter)
//		{
//		case 1:
//			for (int j = 0; j < 3; j++)
//			{
//				if (y1 != arr[j][1])
//					cout << arr[j][1];
//			}
//		default:
//			break;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}