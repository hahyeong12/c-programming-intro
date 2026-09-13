/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define size 5

int main(void)
{
	char random[size] = {'A', 'B', 'C', 'D', 'E'};
	

	for (int i = 0; i < size; i++) {
		printf("%c\n", random[i]);
	}

	printf("\n");

	for (int i = size-1; i >= 0; i--) {
		printf("%c\n", random[i]);
	}

	return 0;
}