// 자료형 크기 구하기

#include <stdio.h>

int main()
{
    int num1 = 0;
    int size;

    size = sizeof num1;

    printf("num1의 크기 : %d\n", size);

    printf("char : %d, short : %d, int : %d, long : %d, long long : %d\n",
    sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long)
    );
    
    return 0;
}