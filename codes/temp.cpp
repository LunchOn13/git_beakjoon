#include <iostream>
using namespace std;

class Array
{
private:
    int *arr;
    int arrSize;

public:
    Array(int sz)
    {
        this->arrSize = sz;
        this->arr = new int[arrSize];
        for (int i = 0; i < sz; i++)
        {
            arr[i] = 0;
        }
    }

    int at(int i)
    {
        return arr[i];
    }

    void add(int iter, int value)
    {
        for (int i = arrSize - 2; i >= iter; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[iter] = value;
    }

    int set(int i, int value)
    {
        arr[i] = value;
        return arr[i];
    }

    void print()
    {
        for(int i = 0; i < arrSize; i++)
        {
            cout<< arr[i] << " ";
        }
        cout << endl;
    }

    void remove(int iter)
    {
        for (int i = iter+1; i < arrSize; i++)
        {
            arr[i-1] = arr[i];
        }
        arr[arrSize -1 ] = 0;
    }

    int find_max()
    {
        int max = -1;
        for( int i = 0; i < arrSize; i++)
        {
            if(max < arr[i])
                max = arr[i];
        }
        return max;
    }
};

int main()
{
    int n, t;
    cin >> n;
    cin >> t;

    Array arr(n);

    char m[10];  

    for( int i = 0; i < t; i ++)
    {
        cin >> m;
        int a, b;
        if(m[0] == 'f')
        {
           cout << arr.find_max() << endl;
        }
        else if(m[0] == 'p')
        {
            arr.print();
        }
        else if(m[0] == 'a' && m[1] == 'd')
        {  
           cin >> a;
           cin >> b;
           arr.add(a,b); 
        }
        else if(m[0] == 'r')
        {
            cin >> a;
            arr.remove(a);
        }
        else if(m[0] == 'a' && m[1] == 't')
        {
            cin >> a;
            cout << arr.at(a) << endl;
        }
        else if(m[0] == 's')
        {
            cin >> a;
            cin >> b;
            cout << arr.set(a,b) <<endl;
        }
    }
}