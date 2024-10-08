#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binary(int counter, int num);

int main(void) {
	int num;
	printf("Please enter a number : ");
	scanf("%d", &num);
	printf("%d", binary(1, num));

	return 0;
}

int binary(int counter, int num) {
	static int bin = 0;
	if (num == 1) {
		return bin + counter;
	}
	bin += (num % 2) * counter;
	num /= 2;
	return binary(counter * 10, num);
}