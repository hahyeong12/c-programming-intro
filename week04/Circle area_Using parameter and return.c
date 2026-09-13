/* kim*/


#include <stdio.h>
#define PI 3.14159265

double get_circle_area(int);

int main(void)
{
	double area1;
	area1 = get_circle_area(1);

	double area10;
	area10 = get_circle_area(10);

	printf("반지름이 1인 원의 넓이는 %g이다.\n", area1);
	printf("반지름이 10인 원의 넓이는 %g이다.\n", area10);

	return 0;
}

double get_circle_area(int a)
{
	double area;
	area = a * a * PI;

	return area;
}