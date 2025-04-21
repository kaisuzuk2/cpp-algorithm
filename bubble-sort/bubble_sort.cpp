#include <iostream>
using namespace std;

void bubble_sort(int *arr, int size)
{
    int i;
    int flg;

    flg = 1;
    while (flg)
    {
        i = size - 1;
        flg = 0;
        while (i >= 1)
        {
            if (arr[i - 1] > arr[i])
            {
                swap(arr[i - 1], arr[i]);
                flg = 1;
            }
            i--;
        }
    }
}

