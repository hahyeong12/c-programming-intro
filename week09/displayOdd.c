/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayOdd(int, int, int);

int main(void)
{
	DisplayOdd(1, 100, 5);

	return 0;
}

void DisplayOdd(int s, int e, int m)
{
	int count;
	count = 0;

	for (int i = s; i <= e; i++) {
		if (i % 2 != 0 && i % m != 0) {
			printf("%d ", i);
			count++;

			if (count % 10 == 0) printf("\n");
		}
	}

}