#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
int N;
int tmp;
void hanoiTop(int n, int start, int tmp ,int end)
{
    if (n == 1)
    {
        cout << start << ' ' << end << endl;
        return;
    }
	if (n == 2)
	{
		cout << start << ' ' << tmp << endl; 
		cout << start << ' ' << end << endl; 
		cout << tmp << ' ' << end << endl; 
		return;
	}
	hanoiTop(n - 1, start, end, tmp); //
	cout << start << ' ' << end << endl;
	hanoiTop(n - 1, tmp, start, end);//
}
int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cin >> N;
	cout << (int)pow(2,N)-1<< endl;
	hanoiTop(N, 1, 2, 3);
}