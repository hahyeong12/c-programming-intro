#include <stdio.h>
#define PI 3.14159265

void show_circle_area(int);

int main(void)
{
	int res;
	res = 1;

	show_circle_area(res);

	res = 10;
	show_circle_area(res);

	return 0;
}


void show_circle_area(int r)
{
	double area;
	area = r * r * PI;
	printf("반지름이 %d인 원의 넓이는 %g\n", r, area);
}