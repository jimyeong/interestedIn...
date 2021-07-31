#include <stdio.h>
// 길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 5개의 정수를 입력 받자! 그리고 입력이 끝나면 다음의 내용을 출력하도록 예제를 작성해보자.

int main(void)
{
    int number = 5;
    int array[number];
    int i, min, max, sum;
    for (i = 0; i < number; i++)
    {
        // array[n] 에 값을 입력 받을 땐 & 을 사용해야 한다.
        printf("5개의 정수를 입력햊주세요");
        scanf("%d", &array[i]);
    }

    min = 9999;
    max = -9999;
    sum = 0;
    for (i = 0; i < number; i++)
    {
        sum += array[i];
        if (min > array[i])
        {
            min = array[i];
        }
        if (max < array[i])
        {
            max = array[i];
        }
    };
    printf("최소값 : %d", min);
    printf("최대값 : %d", max);
    printf("총합 : %d", sum);

    return 0;
}