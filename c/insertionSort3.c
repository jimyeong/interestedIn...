#include <stdio.h>

int number = 30;
int arr[] = {15, 2, 24, 4, 25, 6, 7, 22, 9, 19, 29, 12, 13, 30, 1, 27, 17, 28, 10, 20, 21, 8, 23, 3, 5, 26, 16, 18, 11, 14};
int main(void)
{
    int i, j, temp;
    for (i = 0; i < number - 1; i++)
    {
        j = i;
        while (j >= 0 && arr[j] > arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j--;
        };
    };
    for (i = 0; i < number; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}