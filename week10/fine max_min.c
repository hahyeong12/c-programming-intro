/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define size 5

int main(void)
{
	double min, num;

	double random[size] = {12.6, 21.4, 38.3, 21.9, 12};

	min = random[0];
	for (int i = 0; i < size; i++) {
		if (random[i] < min)
			min = random[i];

	}
	printf("최소값은 %g입니다.\n", min);

	for (int i = 0; i < size; i++) {
		if (random[i] == min)
			printf("최소값은 %g이고, 그 첨자값은 %d입니다.\n", min, i);

	}

	return 0;
}