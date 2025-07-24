#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[100 + 1]; scanf("%s", S);
    // 소문자만
    char result[26 + 1] = {0, };
    char check[26 + 1] = {0, };

    int len = strlen(S);
    for (int i = 0; i < len; i++)
    {
        if (result[S[i] - 'a'] == 0 && check[S[i] - 'a'] != 1)
        {
            result[S[i] - 'a'] = i;
            check[S[i] - 'a'] = 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (check[i] == 0)
            result[i] = -1;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}