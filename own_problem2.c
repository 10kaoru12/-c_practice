#include <stdio.h>

typedef struct
{
    double a;
    double b;
} s;

s add(s f1, s f2)
{

    s f3;
    f3.a = f1.a + f2.a;
    f3.b = f1.b + f2.b;

    return f3;
}

void print(s f)
{

    printf("%.3lf x + %.3lf", f.a, f.b);
}

int main(void)
{

    s f1 = {1.5, 5.0};
    s f2 = {4.0, 2.5};
    s f3;

    f3 = add(f1, f2);
    print(f3);

    return 0;
}