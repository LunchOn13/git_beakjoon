//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[1001];
//
//	int n,k;
//	int check_k = 0;
//	cin >> n >> k;
//
//	// step 1
//	for (int i = 2; i <= n; i++)
//	{
//		arr[i] = 1;
//	}// end for
//
//
//		// step 2
//A:		for (int i = 2; i <= n;i++)
//		{
//			if (arr[i] == 1)
//			{
//				// step 3
//				for (int j = 1; j*i <= n; j++)
//				{
//					if (arr[i*j] == 1) 
//					{
//						arr[i*j] = 0;
//
//						// check k
//						check_k++;
//						if (check_k == k)
//						{
//							cout << i*j;
//							return 0;
//						}// end if
//					}// end if
//
//				}// end for
//				break;
//			}// end if
//		}	// end for
//
//
//		// step 4
//		for (int i = n; i >= 2; i--)
//		{
//			if (arr[i] == 1)
//				goto A;
//		}// end for
//
//}// end main