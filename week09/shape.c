/*컴퓨터공학과  kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayTriangle(int h);

int main(void)
{
	int h;

	do {
		printf("정수를 입력하세요.");
		scanf("%d", &h);
	} while (h <= 0);

	DisplayTriangle(h);


	return 0;
}

void DisplayTriangle(int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 1; j < h - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i+1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
