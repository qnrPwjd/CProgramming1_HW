/*
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int* arrptr1 = &arr1, *arrptr2 = &arr2;
	int* temp;

	printf("arr1 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\narr2 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}

	for (int j = 0; j < 6; j++) {
		temp = *arrptr1;
		*arrptr1 = *arrptr2;
		*arrptr2 = temp;
		arrptr1++;
		arrptr2++;
	}

	printf("\narr1 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\narr2 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}

	return 0;
}