#include <stdio.h>

const int number = 10;

int sorted[number];

void merge(int arr[], int start, int middle, int end)
{
    // 배열을 처음부터, 중간값까지. 중간 이후부터 끝값까지.
    // 비교하면서 sorted에 정렬하고,
    // 다시 정렬된 sorted 를 int arr에 덮는 함수
    int i, j, k, t;
    i = start;
    k = start;
    j = middle + 1;
    while (i <= middle && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            sorted[k] = arr[i];
            i++;
        }
        else
        {
            sorted[k] = arr[j];
            j++;
        }
        k++;
    };
    if (i > middle)
    {
        for (t = j; t <= end; t++)
        {
            sorted[k] = arr[t];
            k++;
        };
    }
    else
    {
        for (t = i; t <= middle; t++)
        {
            sorted[k] = arr[t];
            k++;
        }
    };
    int m;
    for (m = start; m <= end; m++)
    {
        arr[m] = sorted[m];
    }
};

void mergeSort(int arr[], int start, int end)
{
    if (start > end)
    {
        int middle = start + end / 2;
        mergeSort(arr, start, middle);
        mergeSort(arr, middle + 1, end);
        merge(arr, start, middle, end);
    }
}
int main(void)
{
    int i;
    int arr[] = {4, 8, 6, 3, 5, 1, 7, 2, 10, 9};
    mergeSort(arr, 0, number - 1);
    for (i = 0; i < number - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}