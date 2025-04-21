#include <iostream>
using namespace std;

void insertion_sort(int *arr, int size)
{
    int i;
    int j;
    int tmp;

    i = 1;
    while (i < size)
    {
        tmp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
        i++;
    }
}

