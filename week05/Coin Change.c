/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_coin500(int);

int main(void)
{
	int money;


	printf("교환할 돈은 얼마입니까?");
	scanf("%d", &money);

	get_coin500(money);

	return 0;
}

void get_coin500(int c500)
{
	int coin500, coin100, coin50, coin10, remain;

	coin500 = c500 / 500;
	remain = c500 % 500;

	coin100 = remain / 100;
	remain = remain % 100;

	coin50 = remain / 50;
	remain = remain % 50;

	coin10 = remain / 10;
	remain = remain % 10;

	printf("500원 개수	: %d개\n", coin500);
	printf("100원 개수	: %d개\n", coin100);
	printf("50원 개수	: %d개\n", coin50);
	printf("10원 개수	: %d개\n", coin10);
	printf("교환 후 남은 돈	: %d원\n", remain);
}