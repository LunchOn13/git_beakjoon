#include <stdio.h>

int main()
{
    int arr[9] = {0,};

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = -1;
    int iter = -1;

    for (int i = 0; i < 9; i++)
    {
        if (max < arr[i]){
            max = arr[i];
            iter = i + 1;
        }
    }
    printf("%d\n%d\n", max, iter);
}