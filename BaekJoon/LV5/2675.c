#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int T; scanf("%d", &T);

    char S[1000 * 20 + 1];

    for (int i = 0; i < T; i++)
    {
        int R; char S[20 + 1]; scanf("%d %s", &R, S);
        
        int len = strlen(S);
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < R; j++)
            {
                printf("%c", S[i]);
            }
        }
        printf("\n");
    }

    return 0;
}