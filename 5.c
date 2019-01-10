#include <stdio.h>
typedef struct Person
{
    int gakuseki;  /*学籍番号*/
    double height; /*身長(m)*/
    double weight; /*体重(kg)*/
} Person;
int isLargerInHeight(Person *p, Person *q)
{
    if (p->height > q->height)
        return 1;
    else
        return 0;
}
int isLargerInWeight(Person *p, Person *q)
{
    if (p->weight > q->weight)
        return 1;
    else
        return 0;
}
int isLargerInBMI(Person *p, Person *q)
{
    if (p->weight / p->height * p->height > q->weight / q->height * q->height)
        return 1;
    else
        return 0;
}
void compareSwap(Person *p, Person *q, int (*compare)(Person *, Person *))
{
    Person tmp;
    if (!compare(p, q))
    {
        tmp = *p;
        *p = *q;
        *q = tmp;
    }
}
void sortInHeight(Person *array, int num)
{
    int s, t;
    for (s = 0; s < num - 1; s++)
        for (t = s + 1; t < num; t++)
            compareSwap(array + s, array + t, isLargerInHeight);
}
void sortInWeight(Person *array, int num)
{
    int s, t;
    for (s = 0; s < num - 1; s++)
        for (t = s + 1; t < num; t++)
            compareSwap(array + s, array + t, isLargerInWeight);
}
void sortInBMI(Person *array, int num)
{
    int s, t;
    for (s = 0; s < num - 1; s++)
        for (t = s + 1; t < num; t++)
            compareSwap(array + s, array + t, isLargerInBMI);
}
void printPersonArray(Person *x, int num)
{
    int i;
    for (i = 0; i < num; i++)
        printf("gakuseki:%d,height:%f,weight: % f\n ", x[i].gakuseki, x[i].height, x[i].weight);
}
void printPersonArrayBMI(Person *x, int num)
{
    int i;
    for (i = 0; i < num; i++)
        printf("gakuseki:%d,BMI:%fl\n", x[i].gakuseki, x[i].weight / (x[i].height * x[i].height));
}
int main(void)
{
    Person
        array[5] = {{1, 1.5, 45}, {2, 1.75, 70}, {3, 1.6, 50}, {4, 1.7, 75}, {5, 1.6, 60}};
    printPersonArray(array, 5);
    printf("\nsort in weight\n");
    sortInWeight(array, 5);
    printPersonArray(array, 5);
    printf("\nsort in height\n");
    sortInHeight(array, 5);
    printPersonArray(array, 5);
    printf("\nsort in BMI\n");
    sortInBMI(array, 5);
    printPersonArrayBMI(array, 5);
    return 0;
}