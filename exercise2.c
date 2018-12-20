#include <stdio.h>
#include <string.h>

void str_concat(char *d, const char *s1, const char *s2);

int main(void) {
	char d[100];
	char s1[] = "おい引きこもり！";
	char s2[] = "聞いてんのか！？";
	str_concat(d, s1, s2);
	return 0;
}

void str_concat(char *d, const char *s1, const char *s2) {
	strcpy(d,s1);
	strcat(d,s2);
	printf("%s",d);
}