/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void removeBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

typedef struct {
	char capital[50];
	char country[50];
	char population[50];
} datas;

int main(void) {

	datas cities[3];

	printf("Input three cities:\n");

	for (int i = 0; i < 3; i++) {
		printf("Name> ");
		fgets(cities[i].capital, sizeof(cities[i].capital), stdin);
		printf("Country> ");
		fgets(cities[i].country, sizeof(cities[i].country), stdin);
		printf("Population> ");
		fgets(cities[i].population, sizeof(cities[i].population), stdin);
	}

	for (int j = 0; j < 3; j++) {
		removeBSN(cities[j].capital);
		removeBSN(cities[j].country);
		removeBSN(cities[j].population);
	}

	printf("\nPrinting the three cities\n");
	for (int i = 0; i < 3; i++)
		printf("%d. %s in %s with a population of %s people \n", i + 1, cities[i].capital, cities[i].country, cities[i].population);

	return 0;
}
*/