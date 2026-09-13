/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct Car {
	char model[15];
	int year;
	double mileage;
}CarT;

int InputCarsInfo(CarT* cars[], int maxCars);
CarT* InputCarInfo();
void ShowCarsInfo(CarT* cars[], int count);
void ShowCarInfo(CarT*);


int main(void)
{
	CarT* cars[MAX];
	int carCount;

	carCount = InputCarsInfo(cars, MAX);

	ShowCarsInfo(cars, carCount);

	for (int i = 0; i < carCount; i++) {
		free(cars[i]);
	}

	return 0;
}

int InputCarsInfo(CarT* cars[], int maxCars)
{
	int i;
	for (i = 0; i < maxCars; i++) {
		printf("\n%d번째 차량입력: (종료시 end입력)\n", i + 1);
		CarT* car = InputCarInfo();

		if (car == NULL || strlen(car->model) == 0) break;
		
		cars[i] = car;
	}

	return i;
}

CarT* InputCarInfo()
{
	CarT* c1 = (CarT*)malloc(sizeof(CarT));

	printf("모델명: ");
	scanf(" %[^\n]", c1->model);

	if (strcmp(c1->model, "end") == 0) {
		free(c1);
		return NULL;
	}

	printf("제조연도: ");
	scanf("%d", &c1->year);
	printf("총 주행거리(km): ");
	scanf("%lf", &c1->mileage);

	return c1;
}

void ShowCarsInfo(CarT* cars[], int count)
{
	printf("\n차량 정보 출력\n\n");
	for (int i = 0; i < count; i++) {
		ShowCarInfo(cars[i]);
	}

}

void ShowCarInfo(CarT* c1)
{
	printf("%s\t", c1->model);
	printf("%d\t", c1->year);
	printf("%g\n", c1->mileage);
}
