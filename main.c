
��ȭ�� �������ϴ�.���� ���� ������ 1�� �ֽ��ϴ�.

�������� �ǳʶٱ�
��ũ�� ������ �ѵ����б� ���� ����ϱ�

17�� �� 1��
(���� ����)

�������кλ� <21800753@handong.edu>
÷������
���� 4:23 (0�� ��)
������


���� ����
���� ���� ����

÷������ 5��

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "21800753.h"
#include "21400776.h"

typedef enum { FALSE, TRUE } bool;
/*
len: a simple character counting program
Charmgil Hong
*/

int main(int argc, char *argv[]) {
	bool is_number = 0;
	char input[2048];
	int sort, reverse;
	int i;


	while (fgets(input, sizeof(input), stdin) != NULL) {
		// Receive a user input
		if (input[strlen(input) - 1] == '\n')
			input[strlen(input) - 1] = 0;

		// Terminal condition
		if (strcmp(input, "quit") == 0) {
			break;
		}
		is_number = TRUE;
		for (i = 0; i < strlen(input); i++) {
			if (!isdigit(input[i])) {// isdigit() is defined in ctype.h
				printf("Entered input is not a number\n");
				is_number = FALSE;
				break;
			}
		}

		if (is_number) {
			//compute and print the length
			//reverse = reverse_digits(atoi(input)); //"21xx.h"
			sort_digits(atoi(input)); //"21xy.h"
			reverse = reverse_digits(atoi(input)); //"21xx.h"
			printf("reverse> %d\n", reverse);
			//printf("reverse> %d \nsort> %d\n", reverse, sort);

		}
	}
}