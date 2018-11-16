#include <stdio.h>
int main(void)
{
    char str1[5] = "aiueo", str2[5];
    for (int i = 0; i < 5; i++)
    {
        str2[i] = str1[i];
        printf("%c\n", str2[i]);
    }
    return 0;
}