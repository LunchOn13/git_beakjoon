//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<vector <char> >arr(n, vector<char>(50, 0));
//
//	string word;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> word;
//		for (unsigned int j = 0; j<word.size(); j++)
//		{
//			arr[i][j] = word[j];
//		}
//	}
//
//	vector<char> result = arr[0];
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (unsigned int j = 0; j < word.size(); j++)
//		{
//			if (result[j] != arr[i][j])
//			{
//				result[j] = '?';
//			}
//		}
//	}
//
//	for (unsigned int i = 0; i < word.size(); i++)
//	{
//		cout << result[i];
//	}
//
//	return 0;
//}