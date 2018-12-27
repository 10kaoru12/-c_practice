#include <stdio.h>

typedef struct
{
    double a;
    double b;
} sample_s;

sample_s addFormula(sample_s f1, sample_s f2)
{

    sample_s f3;
    f3.a = f1.a + f2.a;
    f3.b = f1.b + f2.b;

    return f3;
}

void printFormula(sample_s f)
{

    printf("%.3lf x + %.3lf", f.a, f.b);
}

int main(void)
{

    sample_s f1 = {1.5, 5.0};
    sample_s f2 = {4.0, 2.5};
    sample_s f3;

    f3 = addFormula(f1, f2);
    printFormula(f3);

    return 0;
}