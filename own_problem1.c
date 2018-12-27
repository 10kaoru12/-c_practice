#include <stdio.h>
typedef struct Person
{
    int ages;
    int height;
    int weight;
} Person;
void input(Person *pperson)
{
    printf("年齢は\n");
    scanf("%d", &pperson->ages);
    printf("身長は\n");
    scanf("%d", &pperson->height);
    printf("体重は\n");
    scanf("%d", &pperson->weight);
    puts("");
}
void output(Person pperson)
{
    printf("%d\n", pperson.ages);
    printf("%d\n", pperson.height);
    printf("%d\n", pperson.weight);
}
int main(void)
{
    Person tadokoro;
    Person miura;
    Person kimura;
    input(&tadokoro);
    input(&miura);
    input(&kimura);
    output(tadokoro);
    output(miura);
    output(kimura);

    return 0;
}