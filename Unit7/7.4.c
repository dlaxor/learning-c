#include <stdio.h>
#include <stdint.h>
#include <limits.h> 

int main()
{
    char num1 = CHAR_MIN;          // char의 최솟값
    short num2 = SHRT_MIN;         // short의 최솟값
    int num3 = INT_MIN;            // int의 최솟값
    long num4 = LONG_MIN;          // long의 최솟값
    long long num5 = LLONG_MIN;    // long long의 최솟값

    // char, short, int는 %d로 출력하고 long은 %ld로 출력, long long은 %lld로 출력
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    // -128 -32768 -2147483648 -2147483648 -9223372036854775808

    return 0;
}