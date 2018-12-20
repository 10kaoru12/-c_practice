#include <stdio.h>

void vector_add(const double *ptr1,const double *ptr2, double *ptr3);

int main(void) {
	double str1[5] = {10, 20, 30, 40, 50};
	double str2[5] = {10, 20, 30, 40, 50};
	double str3[5] = {0};
	vector_add(str1, str2, str3);
	return 0;
}

void vector_add(const double *ptr1,const double *ptr2, double *ptr3) {
	for(int i=0;i<5;i++){
		*(ptr3+i)=*(ptr1+i)+*(ptr2+i);
		printf(" %.1f",*(ptr3+i));
	}
}