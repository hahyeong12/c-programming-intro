/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ConvertTemperature(int);

int main(void)
{
	int tem;
	double c;

	printf("화씨온도를 입력해주세요.");
	scanf("%d", &tem);

	c = ConvertTemperature(tem);

	printf("화씨온도 %d도 = 섭씨온도 %.1f도\n", tem, c);

	return 0;
}

double ConvertTemperature(int f)
{
	double c;

	c = (5.0 / 9.0) * (f - 32);

	return c;
}