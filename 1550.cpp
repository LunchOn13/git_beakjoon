//#include<iostream>
//#include<cmath>
//#include<string>
//#include<vector>
//using namespace std;
//
//
//
//int main()
//{
//	string six_teen;
//
//	cin >> six_teen;
//
//	vector<char> sixteen(six_teen.size());
//	//change
//
//	for (int i = 0; i < six_teen.size(); i++)
//	{
//		sixteen[six_teen.size()-1-i] = six_teen[i];
//	}
//
//	int i = 0;
//	int total = 0;
//	while (i<six_teen.size())
//	{
//		switch (sixteen[i])
//		{
//		case '0':
//			break;
//		case '1':
//			total += 1 * pow(16, i);
//			break;
//		case '2':
//			total += 2 * pow(16, i);
//			break;
//		case '3':
//			total += 3 * pow(16, i);
//			break;
//		case '4':
//			total += 4 * pow(16, i);
//			break;
//		case '5':
//			total += 5 * pow(16, i);
//			break;
//		case '6':
//			total += 6 * pow(16, i);
//			break;
//		case '7':
//			total += 7 * pow(16, i);
//			break;
//		case '8':
//			total += 8 * pow(16, i);
//			break;
//		case '9':
//			total += 9 * pow(16, i);
//			break;
//		case 'A':
//			total += 10 * pow(16, i);
//			break;
//		case 'B':
//			total += 11 * pow(16, i);
//			break;
//		case 'C':
//			total += 12 * pow(16, i);
//			break;
//		case 'D':
//			total += 13 * pow(16, i);
//			break;
//		case 'E':
//			total += 14 * pow(16, i);
//			break;
//		case 'F':
//			total += 15 * pow(16, i);
//			break;
//		}
//		i++;
//	}
//	cout << total;
//
//
//	return 0;
//}