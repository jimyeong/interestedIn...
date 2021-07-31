#include <stdio.h>

int main(void)
{
    char str[] = "Good morning!"; // 13글자임 즉, 즉 length 12. 그런데 14글자 즉 length 14 나옴. 마지막에 널문자 '/0' 이 삽입되었기 떄문에
    printf("배열 str의 크기: %d \n", sizeof(str));
    printf("널 문자 문자형 출력: %c \n", str[13]);
    printf("널 문자 정수형 출력: %d \n", str[13]);
    char nu = '\0';
    char sp = ' ';

    str[12] = '?';
    printf("문자열 출력: %s \n", str);
    printf("%d %d", nu, sp);

    return 0;
}