#include <stdio.h>
#define PI 3.14159265
void show_circle_area_1(void);
void show_circle_area_10(void);


int main(void)
{
	show_circle_area_1();
	show_circle_area_10();

	return 0;
}

void show_circle_area_1(void)
{
	double area = 1 * 1 * PI;
	printf("반지름이 1인 원의 넓이는 %g \n", area);
}

void show_circle_area_10(void)
{
	double area = 10 * 10 * PI;
	printf("반지름이 10인 원의 넓이는 %g\n", area);
}