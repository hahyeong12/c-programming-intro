/*컴퓨터공학과  kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ReadNum(int);
void Seperate(int);

int main(void)
{
	int num;

	printf("세 자리 정수를 입력하세요.");
	scanf("%d", &num);

	ReadNum(num);

	return 0;
}

void ReadNum(int num)
{
	Seperate(num / 100);

	Seperate((num / 10) % 10);

	Seperate(num % 10);

		
}
void Seperate(int num)
{
	switch (num) {
	case 1: printf("one "); break;
	case 2: printf("two "); break;
	case 3: printf("three "); break;
	case 4: printf("four "); break;
	case 5: printf("five "); break;
	case 6: printf("six "); break;
	case 7: printf("seven "); break;
	case 8: printf("eight "); break;
	case 9: printf("nine "); break;
	}
}