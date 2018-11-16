#include <stdio.h>
int main(void)
{
    char str1[] = "aiueo", str2[5];
    int i = 0;
    while (str1[i] != 0)
    {
        str2[i] = str1[i];
        i++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c", str2[i]);
    }
    printf("\n");
    return 0;
}