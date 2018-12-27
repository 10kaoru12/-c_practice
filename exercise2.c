#include <stdio.h>
typedef struct Car
{
    int num;
    double gas;
    struct Car *next;
} Car;

void printlist(Car *first)
{
    Car *pcar;
    for (pcar = first; pcar != NULL; pcar = pcar->next)
    {
        printf("車のナンバーは%d : ガソリン量は%fです。\n", pcar->num, pcar->gas);
    }
}

int main(void)
{
    Car car0;
    Car car1;
    Car car2;

    car0.num = 1234;
    car1.num = 4567;
    car2.num = 7890;
    car0.gas = 25.5;
    car1.gas = 52.2;
    car2.gas = 20.5;
    car0.next = &car1;
    car1.next = &car2;
    car2.next = NULL;
    printlist(&car0);
}
