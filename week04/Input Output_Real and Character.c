/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Get_Real(void);
char Get_Char(void);

int main(void)
{
	double r1, r2;
	char a;

	printf("첫 번째 실수를 입력해주세요.");
	r1 = Get_Real();

	printf("두 번째 실수를 입력해주세요.");
	r2 = Get_Real();

	printf("하나의 문자를 입력해주세요.");
	a = Get_Char();


	printf("[%10g]\n", r1);
	printf("[%10g]\n", r2);
	printf("[%10c]\n", a);


	return 0;
}

double Get_Real(void)
{
	double r;
	scanf("%lf", &r);

	return r;
}

char Get_Char(void)
{
	char a;
	scanf(" %c", &a);

	return a;

}