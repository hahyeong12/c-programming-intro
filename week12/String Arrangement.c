/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N_STR 5
#define N_LEN 9


int main(void)
{
	char str[N_STR][N_LEN];

	for (int i = 0; i < N_STR; i++){
		printf("문자열을 입력하세요.");
		scanf(" %[^\n]", str[i]);
	}

	for (int i = 0; i < N_STR; i++) {
		printf("%s\n", str[i]);
	}

	return 0;
}