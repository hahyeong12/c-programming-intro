/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ConvertTimeToHMS(int, int*, int*, int*);


int main(void)
{
	int time, hour, min, sec;

	printf("시간을 입력하세요.");
	scanf("%d", &time);

	ConvertTimeToHMS(time, &hour, &min, &sec);

	printf("입력된 시간 %d는 %d시간 %d분 %d초입니다.", time, hour, min, sec);
	return 0;
}


void ConvertTimeToHMS(int time, int* hour, int* min, int* sec)
{
	*hour = time / 3600;
	*min = (time % 3600) / 60;
	*sec = time % 60;
}
