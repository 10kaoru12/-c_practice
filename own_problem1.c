//
// Created by 石澤芳瑠 on 2018-12-20.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string(const char *);

int main(void) {
	char a[3] = "Aaa";
	char *pa = a;
	char b[9] = "bbbbbbbb";
	char *pb = b;
	char c[12];
	char *pc = c;
	strcpy(c, a);
	strcat(c, b);
	for (int i = 0; i < 11; i++) {
		printf("%c\n", c[i]);
	}
	string(pc);
}

void string(const char *c) {
	int num_a=0;
	int num_b=0;
	for(int i=0;i<11;i++){
		if (c[i]=='a'){
			num_a++;
		}
		else if (c[i]=='b'){
			num_b++;
		}
	}
	printf("aの数は%d\nbの数は%d",num_a,num_b);
}

