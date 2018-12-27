//
// Created by 石澤芳瑠 on 2018-12-20.
//
#include <stdio.h>
typedef struct Person
{
	int ages;
	int height;
	int weight;
} Person;
void pin(Person *ptr);
void pout(Person Kao);
int main(void)
{
	struct Person Kaoru;
	pin(&Kaoru);
	pout(Kaoru);
}

void pin(Person *Kao)
{
	printf("年齢は\n");
	scanf("%d", &Kao->ages);
	printf("身長は\n");
	scanf("%d", &Kao->height);
	printf("体重は\n");
	scanf("%d", &Kao->weight);
	puts("");
}

void pout(Person Kao)
{
	printf("%d\n", Kao.ages);
	printf("%d\n", Kao.height);
	printf("%d\n", Kao.weight);
}