//#include<iostream>
//#include<cstdlib>
//#include<string>
//using namespace std;
//
//
//
//int main()
//{
//	string p;
//	cin >> p;
//
//	char *g;
//	g = (char *)malloc(sizeof(char)*p.size());
//
//
//	for (int i = 0; i < p.size(); i++)
//	{
//		g[i] = p[i]-48;
//	}
//
//
//	switch (g[0])
//	{
//	case 0:
//		cout << "0";
//		break;
//	case 1:
//		cout << "1";
//		break;
//	case 2:
//		cout << "10";
//		break;
//	case 3:
//		cout << "11";
//		break;
//	case 4:
//		cout << "100";
//		break;
//	case 5:
//		cout << "101";
//		break;
//	case 6:
//		cout << "110";
//		break;
//	case 7:
//		cout << "111";
//		break;
//	}
//
//
//	for ( int i = 1; i < p.size(); i++)
//	{
//		switch (g[i])
//		{
//		case 0:
//			cout << "000";
//			break;
//		case 1:
//			cout << "001";
//			break;
//		case 2:
//			cout << "010";
//			break;
//		case 3:
//			cout << "011";
//			break;
//		case 4:
//			cout << "100";
//			break;
//		case 5:
//			cout << "101";
//			break;
//		case 6:
//			cout << "110";
//			break;
//		case 7:
//			cout << "111";
//			break;
//		}
//	}
//	return 0;
//}