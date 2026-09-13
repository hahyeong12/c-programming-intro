/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159265

double get_circle_area(double);
double get_cylinder_volume(double, double);

int main(void)
{
	double radius, height;
	double volume;
	

	printf("반지름을 입력해주세요.");
	scanf("%lf", &radius);

	printf("높이를 입력해주세요.");
	scanf("%lf", &height);

	volume = get_cylinder_volume(radius, height);

	printf("원기둥의 부피는 %.2f입니다.\n", volume);


	return 0;
}

double get_cylinder_volume(double a, double b)
{
	double volume, area;
	area = get_circle_area(a);
	volume = area * b;

	return volume;
}

double get_circle_area(double a)
{
	double area;
	area = a * a * PI;

	return area;
}
