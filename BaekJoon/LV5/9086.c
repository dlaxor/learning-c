// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     int T; scanf("%d", &T);
//     char FstLst[T * 2 + 1];

//     for (int i = 0; i < T * 2; i += 2)
//     {
//         char InputStr[1001]; scanf("%s", InputStr);
//         int len = strlen(InputStr);

//         FstLst[i] = InputStr[0];
//         FstLst[i + 1] = InputStr[len - 1];
//     }

//     for (int i = 0; i < T * 2; i += 2)
//     {
//         printf("%c", FstLst[i]);
//         printf("%c\n", FstLst[i + 1]);
//     }

//     return 0;
// }