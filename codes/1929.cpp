#include <iostream>

using namespace std;


const int num = 1000001;
int arr[num] = {0,};

int main() 
{
    int m, n;
    cin >> m >> n;

    arr[1]++;
    for( int i = 2; i < num; i++){
        if(arr[i] > 0)
            continue;
        for(int j = 2; j < num; j ++){
            if (i*j> num)
                break;
            if (arr[i*j] > 0)
                continue;
            arr[i*j] ++;
        }
    }

    for( int i = m ; i <= n; i ++){
        if(arr[i] == 0)
            printf("%d\n",i);
    }

}