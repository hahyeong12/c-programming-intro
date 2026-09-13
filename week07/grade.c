/*컴퓨터공학과  kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Input_score();
char Get_grade(int, int, int);

int main(void)
{
	int n1, n2, n3;
	char grade;

	printf("첫 번째 과목 점수를 입력하세요.");
	n1 = Input_score();
	printf("두 번째 과목 점수를 입력하세요.");
	n2 = Input_score();
	printf("세 번째 과목 점수를 입력하세요.");
	n3 = Input_score();

	if (n1 == -1 || n2 == -1 || n3 == -1) {
		printf("유효하지 않은 숫자가 입력되었습니다.");
	}
	else{
		grade = Get_grade(n1, n2, n3);
		printf("최종 학점은 %c입니다.", grade);
	}

	return 0;	
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