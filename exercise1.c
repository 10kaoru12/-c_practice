#include <stdio.h>
#include <stdlib.h>

void ary_copy(char *d, const char *s, int t);

int main(void) {
	int t = 5;
	char d[8] = {0};
	char s[8] = {"aiueo700"};
	ary_copy(d, s, t);

	return 0;
}

void ary_copy(char *d, const char *s, int t) {
	for (int i = 0; i < t; i++) {
		d[i] = s[i];
	}
	for (int i = 0; i < t; i++) {
		printf("d[%d]=%c\n", i, d[i]);
	}
}