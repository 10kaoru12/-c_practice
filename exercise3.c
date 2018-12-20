#include <stdio.h>

int *max_element(int *ptr, int n);

int main(void) {
	const int n = 10;
	int *return_ptr;
	int str[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *ptr;
	ptr = str;
	return_ptr = max_element(ptr, n);
	printf("最大値のアドレスは%p\n", return_ptr);
	printf("最大値は%d", *return_ptr);
	return 0;
}

int *max_element(int *ptr, int n) {
	int max;
	int *max_ptr;
	max = *ptr;
	max_ptr = ptr;
	ptr++;
	for (int i = 0; i < n; i++) {
		if (max < *ptr) {
			max = *ptr;
			max_ptr = ptr;
		}
		ptr++;
	}
	return max_ptr;
}