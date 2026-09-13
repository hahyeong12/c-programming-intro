/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Input_score();
char Get_grade(int, int, int);
void ask(void);
int NegativeDetect(int);

int main(void)
{

	for (int i = 0; i < 5; i++) {
		ask();
		printf("\n");
	}


	return 0;
}

void ask(void)
{
	int n1, n2, n3;
	char grade;

	printf("첫 번째 과목 점수를 입력하세요. ");
	n1 = Input_score();
	n1 = NegativeDetect(n1);

	printf("두 번째 과목 점수를 입력하세요. ");
	n2 = Input_score();
	n2 = NegativeDetect(n2);

	printf("세 번째 과목 점수를 입력하세요. ");
	n3 = Input_score();
	n3 = NegativeDetect(n3);


	grade = Get_grade(n1, n2, n3);
	printf("최종 학점은 %c입니다.\n", grade);
}

int NegativeDetect(int n)
{
	while (n == -1) {
		printf("유효하지 않은 숫자가 입력되었습니다.\n");
		printf("다시 입력하세요.");
		n = Input_score();
	}

	return n;
}

int Input_score(void)
{
	int n;
	scanf("%d", &n);

	if (n >= 0 && n <= 100) return n;
	else return -1;
}

char Get_grade(int n1, int n2, int n3)
{
	double average;
	average = (n1 + n2 + n3) / 3;

	if (average >= 90) return 'A';
	else if (average >= 80) return 'B';
	else if (average >= 70) return 'C';
	else if (average >= 60) return 'D';
	else return 'F';
}