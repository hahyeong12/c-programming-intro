/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DivideReal(double);

int main(void)
{
	double real;

	printf("실수를 입력하세요.");
	scanf("%lf", &real);


	DivideReal(real);

	return 0;
}

void DivideReal(double num)
{
	int num1;
	double num2;

	num1 = (int)num;
	num2 = num - num1;

	printf("실수 : %g\n", num);
	printf("정수 부분은 %d이고 소수 부분은 %g 이다.\n", num1, num2);
}