/*
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void convCase(char str[]) {
	const int diff = 'a' - 'A';
	int len = strlen(str);

	for(int i = 0; i < len; i++){
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += diff;
	}
}

int main(void) {
	char str[100];
	printf("문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	convCase(str);

	printf("%s", str);
	return 0;
}