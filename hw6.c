#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int nums[5];
	int odds[5] = { -1, -1, -1, -1, -1 }, evens[5] = { -1,-1,-1,-1,-1 };
	int i = 0;

	printf("Please input five integers : ");
	scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);

	for (int i = 0; i < 5; i++) {
		if (nums[i] % 2 == 0) {
			for (int j = 0; j < 5; j++)
				if (evens[j] == -1) {
					evens[j] = nums[i];
					break;
				}
		}
		else {
			for (int k = 0; k < 5; k++) {
				if (odds[k] == -1) {
					odds[k] = nums[k];
					break;
				}
			}
		}
	}
	
	printf("Odd numbers : ");
	while (odds[i] != -1) {
		printf("%d ", odds[i]);
		i += 1;
	}
	i = 0;
	printf("\nEven numbers : ");
	while (evens[i] != -1) {
		printf("%d ", evens[i]);
		i += 1;
	}

	return 0;
}