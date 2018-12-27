#include <stdio.h>
typedef struct Person
{
    char name;
    int ages;
    int height;
    int weight;
} Person;
void input(Person *pperson)
{
    printf("名前は\n");
    scanf("%s", &pperson->name);
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
    printf("%s", pperson.name);
    printf("%d", pperson.ages);
    printf("%d", pperson.height);
    printf("%d", pperson.weight);
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