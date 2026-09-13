/*컴퓨터공학과  kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int IncomeTax(int);

int main(void)
{
	int income, tax;

	printf("수입을 입력해주세요.");
	scanf("%d", &income);

	tax = IncomeTax(income);

	printf("납부할 세금은 %d원 입니다.", tax);
}

int IncomeTax(int i)
{
	int tax;

	if (i <= 10000000) tax = (int)(i * 0.008);
	else if (i <= 40000000) tax = (int)(i * 0.17);
	else if (i <= 80000000) tax = (int)(i * 0.26);
	else tax = (int)(i * 0.35);

	return tax;
}