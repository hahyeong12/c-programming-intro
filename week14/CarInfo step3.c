/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Car {
	char model[15];
	int year;
	double mileage;
}CarT;

CarT* InputCarInfo();
void ShowCarInfo(CarT*);
void addMileage(CarT*);
void isOlderThanYear(CarT*);


int main(void)
{
	CarT* c1;
	c1 = InputCarInfo();

	ShowCarInfo(c1);

	addMileage(c1);
	ShowCarInfo(c1);

	isOlderThanYear(c1);
	free(c1);

	return 0;
}

CarT* InputCarInfo()
{
	CarT* c1 = (CarT*)malloc(sizeof(CarT));

	printf("모델명: ");
	scanf(" %[^\n]", c1->model);

	printf("제조연도: ");
	scanf("%d", &c1->year);
	printf("총 주행거리(km): ");
	scanf("%lf", &c1->mileage);

	return c1;
}

void ShowCarInfo(CarT* c1)
{

	printf("%s\t", c1->model);
	printf("%d\t", c1->year);
	printf("%g\n\n", c1->mileage);
}

void addMileage(CarT* c1)
{
	double add;

	printf("증가할 주행거리는? ");
	scanf("%lf", &add);

	c1->mileage = c1->mileage + add;
}

void isOlderThanYear(CarT* c1)
{
	if (c1->year < 2023) printf("2년이 넘었습니다.\n");
	else printf("2년이 안 됐습니다.\n");
}
