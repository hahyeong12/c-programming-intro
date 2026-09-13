/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_hour(int);

int main(void)
{
	int num;

	printf("초를 입력하세요.");
	scanf("%d", &num);

	get_hour(num);

	return 0;
}

void get_hour(int h)
{
	int hour, min, second, remain;

	hour = h / 3600;
	remain = h % 3600;

	min = remain / 60;
	second = remain % 60;

	printf("%d초는 %d시간 %d분 %d초 입니다. ", h, hour, min, second);
}