/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double FuelEfficiency(double, double);
void ask(void);

int main(void)
{
    ask();

    printf("프로그램을 종료합니다.\n");

    return 0;
}

void ask(void)
{
    double fuel, distance, efficiency;
    char answer;

    do {
        printf("주입한 연료량을 입력하세요 (리터): ");
        scanf("%lf", &fuel);

        printf("주행거리를 입력하세요 (km): ");
        scanf("%lf", &distance);

        efficiency = FuelEfficiency(fuel, distance);
        printf("연비: %g km/l\n", efficiency);

        printf("다시 계산하겠습니까? (Y/N): ");
        scanf(" %c", &answer);

    } while (answer == 'Y' || answer == 'y');

}

double FuelEfficiency(double fuel, double distance)
{
    double efficiency;

    efficiency = distance / fuel;

    return efficiency;
}