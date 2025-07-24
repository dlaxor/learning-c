#include <stdio.h>

int reverseInt(int);

int main(void)
{
    int A, B; scanf("%d %d", &A, &B);

    A = reverseInt(A);
    B = reverseInt(B);

    if (A > B)
        printf("%d\n", A);
    else
        printf("%d\n", B);
}

int reverseInt(int x)
{
    int result = 0;

    for (int i = x; i != 0; i /= 10)
    {
        result = result * 10 + i % 10;
    }

    return result;
}