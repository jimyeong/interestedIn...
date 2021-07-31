#include <stdio.h>

const int number = 30;
void quickSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    };
    int i, j, temp, pivot;
    i = start + 1;
    j = end;
    pivot = start;
    while (i < j)
    {
        while (i <= end && arr[i] <= arr[pivot])
        {
            i++;
        };
        while (j > start && arr[j] >= arr[pivot])
        {
            j--;
        };
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        else
        {
            temp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = temp;
        }
    }
    quickSort(arr, start, j - 1);
    quickSort(arr, j + 1, end);
};
int main(void)
{
    int arr[] = {15, 2, 24, 4, 25, 6, 7, 22, 9, 19, 29, 12, 13, 30, 1, 27, 17, 28, 10, 20, 21, 8, 23, 3, 5, 26, 16, 18, 11, 14};
    int i;
    quickSort(arr, 0, number - 1);
    for (i = 0; i < number; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}