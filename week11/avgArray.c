/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100
#define SENTINEL -1


int GetIntegerArray(int a[], int, int);
double AverageIntegerArray(int a[], int n);
void PrintIntegerArray(int a[], int n);

int main(void)
{
	int integer_array[MAX];
	int num;
	double ave;

	num = GetIntegerArray(integer_array, MAX, SENTINEL);

	ave = AverageIntegerArray(integer_array, num);

	PrintIntegerArray(integer_array, num);

	printf("평균값은 %g입니다.", ave);

	return 0;
}

int GetIntegerArray(int a[], int n, int s)
{
	int score;
	int i;

	for (i = 0; i < n; i++) {
		printf("점수를 입력하세요.");
		scanf("%d", &score);
		if (score == s) break;

		a[i] = score;
	}

	return i;
}

double AverageIntegerArray(int a[], int n)
{
	int sum = 0;
	double ave;

	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	ave = (double)sum / n;

	return ave;
}

void PrintIntegerArray(int a[], int n)
{
	printf("입력값은 {");
	for (int i = 0; i < n; i++) {
		printf("%3d", a[i]);
	}
	printf("}입니다.\n");
}