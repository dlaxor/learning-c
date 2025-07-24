#include <stdio.h>

int main(void)
{
    int A, B; scanf("%d %d", &A, &B);
    int A3, A2, A1, B3, B2, B1;
    int sA, sB;

    A3 = A / 100;
    A2 = (A - A3*100) / 10;
    A1 = A - A3*100 - A2*10;
    sA = A1*100 + A2*10 + A3;

    B3 = B / 100;
    B2 = (B - B3*100) / 10;
    B1 = B - B3*100 - B2*10;
    sB = B1*100 + B2*10 + B3;

    if (sA > sB)
        printf("%d\n", sA);
    else
        printf("%d\n", sB);

    return 0;
}