#include <stdio.h>
// 인접한 두수를 비교한후에, 큰 수를 뒤로 하나씩 미룬다.
// O(N^2);

int number = 30;
int main(void)
{
    int arr[] = {15, 2, 24, 4, 25, 6, 7, 22, 9, 19, 29, 12, 13, 30, 1, 27, 17, 28, 10, 20, 21, 8, 23, 3, 5, 26, 16, 18, 11, 14};
    int i, j, temp;

    for (i = 0; i < number; i++)
    {
        for (j = 0; j < number - (i + 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    };
    for (i = 0; i < number; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}