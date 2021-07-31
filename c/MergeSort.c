#include <stdio.h>

const int number = 30;
int sorted[number];

// void merge(int *arr, int start, int middle, int end)
// {
//     int i, j, k, m;
//     i = start;
//     k = start;
//     j = middle + 1;
//     while (i >= middle && j >= end)
//     {
//         if (arr[i] <= arr[j])
//         {
//             sorted[k] = arr[i];
//             i++;
//         }
//         else
//         {
//             sorted[k] = arr[j];
//             j++;
//         };
//         k++;
//     }
//     if (i > middle)
//     {
//         for (m = j; m < end; m++)
//         {
//             sorted[k] = arr[m];
//             k++;
//         };
//     }
//     else
//     {
//         for (m = i; m < middle; m++)
//         {
//             sorted[k] = arr[m];
//             k++;
//         }
//     };
//     int n;
//     for (n = start; n <= end; n++)
//     {
//         arr[n] = sorted[n];
//     }
// };

// void mergeSort(int *arr, int start, int end)
// {
//     if (start < end)
//     {
//         int middle = start + end / 2;
//         mergeSort(arr, start, middle);
//         mergeSort(arr, middle + 1, end);
//         merge(arr, start, middle, end);
//     }
// };

void merge(int a[], int m, int middle, int n)
{
    int i = m;
    int j = middle + 1;
    int k = m;
    printf("merge1");

    while (i <= middle && j <= n)
    {
        if (a[i] <= a[j])
        {
            sorted[k] = a[i];
            i++;
        }
        else
        {
            sorted[k] = a[j];
            j++;
        }
        k++;
    }
    int t;
    printf("merge2");
    if (i > middle)
    {

        for (t = j; t <= n; t++)
        {
            sorted[k] = a[t];
            k++;
        }
    }
    else
    {
        for (t = i; t <= middle; t++)
        {
            sorted[k] = a[t];
            k++;
        }
    }
    for (t = m; t <= n; t++)
    {
        a[t] = sorted[t];
    }
    printf("merge3");
}

void mergeSort(int a[], int m, int n)
{
    if (m < n)
    {

        int middle = m + n / 2;

        mergeSort(a, m, middle);
        mergeSort(a, middle + 1, n);
        merge(a, m, middle, n);
        printf("hi ");
    }
}
int main(void)
{

    int arr[] = {15, 2, 24, 4, 25, 6, 7, 22, 9, 19, 29, 12, 13, 30, 1, 27, 17, 28, 10, 20, 21, 8, 23, 3, 5, 26, 16, 18, 11, 14};
    int i;
    mergeSort(arr, 0, number - 1);
    for (i = 0; i < number; i++)
    {
        printf("%d ", arr[i]);
    };

    return 0;
}