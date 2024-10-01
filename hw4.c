#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, check = 1;
	printf("Please enter a number : ");
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			check = 0;
			break;
		}
	}
		
	if (check == 1)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");
	return 0;
}