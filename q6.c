#include <stdio.h>
int main(void)
{
    int str1[2][2] = {};
    int str2[2][2][2] = {};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("str1[%d][%d]:%p\n", i, j, &str1[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("str2[%d][%d][%d]:%p\n", i, j, k, &str2[i][j][k]);
            }
        }
    }
    return 0;
}