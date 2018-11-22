#include <stdbool.h>
int prime_num(int num)
{
    bool flag = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}