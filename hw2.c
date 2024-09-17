#include <stdio.h>

int main(void) {
	float kilo;
	printf("Please enter Kilometers : ");
	scanf("%f", &kilo);

	printf("%.1f km is equal to %.1f miles.", kilo, kilo / 1.609);
	return 0;
}