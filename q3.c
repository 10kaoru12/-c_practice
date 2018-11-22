#include <stdio.h>
#include <stdbool.h>
#include "q3func.h"

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("素数ならば1,素数でなければ0：%d\n", prime_num(num));
    return 0;
}