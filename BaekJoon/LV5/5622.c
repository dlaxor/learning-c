#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[16]; scanf("%s", word);
    // 대문자 only, 2 <= word <= 5

    int len = strlen(word);
    int time = 0;

    for (int i = 0; i < len; i++)
    {
        if (65 <= word[i] <= 67) // 2
            time += 3;
        else if (word[i] <= 70)
            time += 4;
        else if (word[i] <= 73) // 4
            time += 5;
        else if (word[i] <= 76)
            time += 6;
        else if (word[i] <= 79) // 6
            time += 7;
        else if (word[i] <= 83)
            time += 8;
        else if (word[i] <= 86) // 8
            time += 9;
        else if (word[i] <= 90)
            time += 10;
    }

    printf("%d", time);

    return 0;
}