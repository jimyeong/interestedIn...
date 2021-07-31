#include <stdio.h>
// 사용자로부터 영단어를 입력받아서
// char형 배열에 저장한다.
// 그 다음 배열에 저장된 영어 단어를 역순으로 뒤집는다. 물론 이때 널 문자의 위치가 변경되선 안된다.
// universe
// u      e
//  n    s
//   i  r
//    ve

// universe 0-7
// universe
// eniversu
// esivernu
// esrveinu
// esrevinu

// esrveinu

// esrevinu

// 0 1 2 3 4 5 6 7
// 0 1 2 3     4 5 6 7
// a[0] + a[7];

// 0 1 2 3 4 5 6 -> 7
// 0 1 2 3   4 5 6
// 0 1 2 3 4 5 6
// a[0] + a[6];
// a[1] + a[5];
// a[2] + a[4];
// a[3] + a[3];

int main(void)
{
    int leng, i;
    char temp;
    char word[100];
    printf("입력하실 단어는 무엇인가요? 100자 미만입니다.");
    scanf("%s", word);
    leng = 0;
    while (word[leng] != '\0')
    {
        leng++;
        /* code */
    };
    printf("%d\n", leng);
    for (i = 0; i < leng / 2; i++)
    {

        temp = word[i];
        word[i] = word[(leng - i) - 1];
        word[(leng - i) - 1] = temp;
    };

    printf("%s", word);

    return 0;
}