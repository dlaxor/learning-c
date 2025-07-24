#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[1000001]; scanf("%[^\n]s", S);

    int count = 0;
    int inWord = 0;

    int len = strlen(S);

    for (int i = 0; i < len; i++)
    {
        if (S[i] != ' ')
        {
            if (!inWord)
            {
                inWord = 1;
                count++;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    printf("%d\n", count);
    
    return 0;
}