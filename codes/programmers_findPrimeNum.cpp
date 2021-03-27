#include <string>
#include <vector>

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a)
{
    if (a == 1)
        return false;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int swap(int data[], int i, int j)
{
    char temp;
    if (i == j)
        return 0;
    temp = data[i];
    data[i] = data[j];
    data[j] = temp;
    return 0;
}

int Permutation(int data[], int n, int r, int depth)
{
    int i;

    if (r == depth)
    {
        for (i = 0; i < n; i++)
        {
            cout << data[i];
        }
        cout << endl;
        return 0;
    }

    for (i = depth; i < n; i++)
    {
        swap(i, depth);
        Permutation(data, n, r, depth + 1);
        swap(i, depth);
    }
    return 0;
}

int solution(int numbers[])
{
    int answer = 0;

    // 모든 조합 검증

    // 숫자 길이 결정
    // https://mildchae.tistory.com/5
    // https://novemberfirst.tistory.com/61
    // n 개의 원소중 m 개를 고르는 모든조합

    int n = sizeof(numbers)/sizeof(int);
    Permutation(numbers, n ,2,0);

    return answer;
}

int main()
{
    int nums[2]= {1,7};
    int num2[3]= {0,1,1};
    solution(nums);
    cout << "----------" << endl;
    solution(num2);
}