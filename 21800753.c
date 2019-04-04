#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "21800753.h"
#define MAX 2048

int sort_digits(int n) {
	int i, j;
	int temp;
	int a;
	char input[MAX];

	for (i = 0; i < MAX; i++) {
		input[i] = n % 10;
		n = n / 10;
	}

	for (i = 0; i < MAX; i++) {
		temp = input[i];
		j = i - 1;
		while (j >= 0 && input[j] > temp) {
			input[j + 1] = input[j];
			j--;
		}
		input[j + 1] = temp;
	}
	printf("sort> ");
	for (i = 0; i < MAX; i++) {
		if (input[i] != 0)
			printf("%d", input[i]);
	}
	printf("\n");

	return 0;
}
