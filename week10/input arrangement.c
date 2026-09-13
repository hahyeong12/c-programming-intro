/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define size 5

int main(void)
{
	int input[size];
	int count = 0;

	for (int i = 0; i < size; i++) {
		printf("정수를 입력하세요.");
		scanf("%d", &input[i]);
	}

	printf("\n");

	for (int i = 0; i < size; i++) {
		printf("%5d ", input[i]);
	}

	printf("\n\n");

	for (int i = 0; i < size; i++) {
		printf("정수를 입력하세요.");
		scanf("%d", &input[i]);
		if (input[i] == -1) break;
		count++;
	}

	for (int i = 0; i < count; i++) {
		printf("%5d ", input[i]);
	}

}