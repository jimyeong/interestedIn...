#include <stdio.h>

int number = 30;
void quickSort(int data[], int start, int end)
{
    if (start >= end)
    {
        return;
    };
    int i, j, pivot, temp;
    pivot = start;
    i = start + 1;
    j = end;
    while (i <= j)
    {
        while (i <= end && data[i] <= data[pivot])
        {
            i++;
        };
        while (j > start && data[j] >= data[pivot])
        {
            j--;
        };
        if (i < j)
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
        else
        {
            temp = data[pivot];
            data[pivot] = data[j];
            data[j] = temp;
        }
    }
    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}
int main(void)
{
    int i;
    int arr[] = {15, 2, 24, 4, 25, 6, 7, 22, 9, 19, 29, 12, 13, 30, 1, 27, 17, 28, 10, 20, 21, 8, 23, 3, 5, 26, 16, 18, 11, 14};
    quickSort(arr, 0, number - 1);
    for (i = 0; i < number; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}