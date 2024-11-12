/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float standard_deviation(float num_list[]) {
	float std_devi;
	float sum = 0, avg, variance;
	float square_devi_list[5];
	float square_devi_sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += num_list[i];
	}
	avg = sum / 5.0;
	for (int i = 0; i < 5; i++) {
		square_devi_list[i] = (num_list[i] - avg) * (num_list[i] - avg);
	}
	for (int i = 0; i < 5; i++) {
		square_devi_sum += square_devi_list[i];
	}
	return sqrt(square_devi_sum / 5.0);
}

int main(void) {
	float num_list[5];
	float std_devi = 0;
	printf("Enter 5 real numbers : ");
	scanf("%f %f %f %f %f", &num_list[0], &num_list[1], &num_list[2], &num_list[3], &num_list[4]);

	std_devi = standard_deviation(num_list);
	printf("Stnadard Deviation = %.3f", std_devi);
	return 0;
}
*/