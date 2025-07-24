#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N; scanf("%d", &N);
    char intArr[101]; scanf("%s", intArr);
    // 문자열을 문자열배열에 입력받으면 낱개로 입력받아짐

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += intArr[i] - 48;
        // 문자열 '0의 아스키 코드값 == 48
        // '1' == 49, '2' == 50 ...

        // 그래서 정수를 입력받으면 '0' 또는 48을 빼야 원래 정수값이 나온다
    }

    printf("%d", sum);

    return 0;
}