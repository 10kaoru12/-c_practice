#include <stdio.h>
#include "q2func.h"

int main(void)
{
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("最大公約数は：%d\n", co_num(num1, num2));
    return 0;
}