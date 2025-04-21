#include <iostream>
using namespace std;

void selection_sort(int *arr, int size)
{
    int i;
    int j;
    int min;

    i = 0;
    while (i < size - 1)
    {
        min = i;
        j = i + 1;
        while (j < size)
        {
            if (arr[j] < arr[min])
                min = j;
            j++;
        }
        if (i != min)
            swap(arr[i], arr[min]);
        i++;
    }
}

