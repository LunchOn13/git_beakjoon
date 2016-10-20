//#include<iostream>
//#include<cstdlib>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	
//	char **arr = (char**)malloc(sizeof(char*)*n);
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = (char *)malloc(sizeof(char)*80);
//	}
//
//	int k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> k;
//		cin >> arr[i];
//		char letter;
//		while(1)
//		{
//			arr[i][k-1] = arr[i][k];
//			k++;
//			if (arr[i][k] == NULL)
//			{
//				arr[i][k - 1] = '\0';
//				break;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << i + 1 << " " << arr[i] << endl;
//	}
//
//
//
//	return 0;
//}