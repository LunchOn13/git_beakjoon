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

    void shift(int loop)
    {
        int tmp;
        for(int i = 0; i < loop; i++)
        {
            tmp = arr[arrSize-1];

            for(int k = arrSize-1; k > 0; k--)
            {
                arr[k] = arr[k-1];
            }
            arr[0] = tmp;
        }
    }
};

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i ++)
    {
        int n, d;
        cin >> n;
        cin >> d;
        Array arr(n);

        for(int ii = 0; ii < n; ii++)
        {
            int value;
            cin >> value;
            arr.set(ii,value);
        }

        arr.shift(d);
        arr.print();
    }

}