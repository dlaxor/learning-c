#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char word[101] = {0, }; scanf("%s", word);
    int len = 0;

    for (int i = 0; word[i] != 0; i++)
    {
        len++;
    }

    printf("%d", len);

    return 0;
}