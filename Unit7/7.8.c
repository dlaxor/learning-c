// byte

// char : 1
// short : 2
// int : 4
// long : 4
// long long : 8

#include <stdio.h>

int main()
{
    short num1;
    long long num2;

    printf("%d\n", sizeof(num1) + sizeof num2 + sizeof(int));

    return 0;
    
}