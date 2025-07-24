#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char S[1001]; scanf("%s", S);
    int i; scanf("%d", &i);

    char result = S[i-1];

    printf("%c", result);

    return 0;
}