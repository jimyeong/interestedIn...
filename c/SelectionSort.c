#include <stdio.h>
int main(void)
{
    // 뒤로 보내면 어떨까
    // O(N^2)
    int array[10] = {8, 4, 3, 1, 2, 5, 10, 6, 7, 9};
    int i, j, index, temp, min;

    for (i = 0; i < 10; i++)
    {
        min = 9999;
        for (j = i; j < 10; j++)
        {
            if (array[j] < min)
            {
                index = j;
                min = array[j];
            }
        };
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}