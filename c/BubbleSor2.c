#include <stdio.h>

int number = 30;
void BubbleSort(int data[])
{
    int i, j, temp;
    for (i = 0; i < number; i++)
    {
        for (j = 0; j < number - (1 + i); j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    };

    for (int i = 0; i < number; i++)
    {
        printf("%d ", data[i]);
    }
}

int main(void)
{

    int arr[] = {15, 2, 24, 4, 25, 6, 7, 22, 9, 19, 29, 12, 13, 30, 1, 27, 17, 28, 10, 20, 21, 8, 23, 3, 5, 26, 16, 18, 11, 14};
    BubbleSort(arr);

    return 0;
}