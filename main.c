
대화를 열었습니다.읽지 않은 메일이 1개 있습니다.

콘텐츠로 건너뛰기
스크린 리더로 한동대학교 메일 사용하기

17개 중 1개
(제목 없음)

최진아학부생 <21800753@handong.edu>
첨부파일
오전 4:23 (0분 전)
나에게


메일 번역
영어 번역 안함

첨부파일 5개

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