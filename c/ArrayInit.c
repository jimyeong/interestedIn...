#include <stdio.h>

int main(void)
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr3[5] = {1, 2};
    int ar1Len, ar2Len, ar3Len, i;
    printf("배열 arr1의 메모리 상의 크기: %d ", sizeof(arr1));
    ar1Len = sizeof(arr1) / sizeof(int);
    printf("배열 arr1의 길이: %d ", sizeof(ar1Len));

    return 0;
}
