/*컴퓨터공학과  kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Difference(double, double);

int main(void)
{
	double num1, num2, num3, dif;
	printf("두 수를 입력해주세요.");
	scanf("%lf%lf", &num1, &num2);

	dif = Difference(num1, num2);

	printf("두 수의 차는 %g입니다.", dif);
}

double Difference(double n1, double n2)
{
	double dif;

	if (n1 >= n2) {
		dif = n1 - n2;
	}
	else {
		dif = n2 - n1;
	}

	return dif;
}