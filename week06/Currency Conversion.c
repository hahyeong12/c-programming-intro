#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double exchange_rate;

void set_rate(double);
double get_rate(void);
int to_won(double);
double to_dollar(int);


int main(void)
{
	int won;
	double rate, rate2, dollar;

	printf("$1에 대한 오늘의 환율은?");
	scanf("%lf", &rate);

	set_rate(rate);
	rate2 = get_rate();
	printf("$1에 대한 오늘의 환율은 %.2f원입니다.\n", rate2);

	won = to_won(0.9);
	dollar = to_dollar(2600);

	printf("$2 = %d원\n", won);
	printf("2600원 = $%.2f\n", dollar);

	return 0;
}

void set_rate(double won)
{
	exchange_rate = won;
}
double get_rate(void)
{
	double rate = exchange_rate;

	return rate;
}
int to_won(double dollar)
{
	int change_won;
	change_won = (int)(exchange_rate * dollar);
	return change_won;
}
double to_dollar(int won)
{
	double change_dollar;
	change_dollar =  won / exchange_rate;
	return change_dollar;
}

/*전역 변수를 사용하지 않는다면 먼저 set_rate 함수에서 사용자에게 환율값을 입력받고
이를 set_rate함수 내 지역 변수에 저장 후 메인함수로로 반환한다.
main 함수에서는 반환된 값을 main함수의 지역변수에 저장하고 후에
to_won, to_dollar 함수에 이 값들을 전달하고 각 사용자 설정 함수들은
매개변수를 이용해 이 값을 전달받고 처리 후 반환하는 과정을 반복하여
최종적으로 main 함수에서 출력한다.
*/

/*to_won, to_dollar 함수에 지역변수를 사용하지 않는다면
각 함수에서 전역 변수에 직접 개입하여 변형하고 main 함수에서는
반환값 없이 변환 된 전역변수를 바로 이용할 수 있다.*/
