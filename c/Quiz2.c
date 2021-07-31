#include <stdio.h>

int main(void)
{
    char greeting[] = "Good time";
    int number = sizeof(greeting) / sizeof(char);

    int i;

    i = 0;
    // 그냥 배열 넣으면 출력 할 수 있다.
    printf("%s\n", greeting);

    while (greeting[i] != '\0')
    {
        printf("%c ", greeting[i]);
        i++;
    }

    return 0;
}