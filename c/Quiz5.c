#include <stdio.h>

// 프로그램 사용자로부터 영어단어를 입력받아서, 아스키 코드가가장 큰 문자를 찾아서 출력한다.
int main(void)
{
    char word[100];
    int i, j;
    char max = 0;
    printf("원하는 단어를 입력하세요");
    scanf("%s", word);
    j = 0;
    while (word[j] != '\0')
    {
        j++;
    }

    for (i = 0; i < j; i++)
    {
        if (max < word[i])
        {
            max = word[i];
        }
    }
    printf("가장 큰 아스키 코드 값의 문자: %c\n", max);

    return 0;
}