/* kim*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double GetEfficiency(int n1, int n2);

int main(void)
{
	int start, arrive;
	double efficiency;

	printf("출발 지점의 주행 거리계를 입력하세요.");
	scanf("%d", &start);

	printf("도착 지점의 주행 거리계를 입력하세요.");
	scanf("%d", &arrive);

	efficiency = GetEfficiency(start, arrive);

	printf("연료 1리터당 주행 거리는 : %g", efficiency);
}

double GetEfficiency(int n1, int n2)
{
	int fuel;
	double efficiency;

	printf("사용 연료량을 입력하세요.");
	scanf("%d", &fuel);

	efficiency = ((double)n2 - n1) / fuel;

	return efficiency;
}
