#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[1000001]; scanf("%[^\n]s", S);
    // 줄바꿈 문자를 만나기 전까지 입력이 지속되고, 만나면 입력을 종료하라

    int len = strlen(S);
    int count = 1;

    if (len == 1 && S[0] == ' ')
        printf("0\n");
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (S[i] == ' ')
                count++;
        }
        if (len != 1 && (S[0] == ' ' || S[len - 1] == ' '))
            count--;
        if (len != 1 && (S[0] == ' ' && S[len - 1] == ' '))
            count--;
        printf("%d\n", count);
    }

    return 0;
}