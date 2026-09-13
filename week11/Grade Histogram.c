/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 100
#define SENTINEL -1
#define HISMAX 11

int GetScores(int a[], int, int);
void CalculateHistogram(int a[], int, int b[]);
void PrintHistogram(int a[], int);


int main(void)
{
	int scores[MAX];
	int histogram[11] = { 0 };
	int num;

	num = GetScores(scores, MAX, SENTINEL);

	CalculateHistogram(scores, num, histogram);

	PrintHistogram(histogram, HISMAX);

	return 0;
}

int GetScores(int a[], int n, int s)
{
	int score;
	int i;

	for (i = 0; i < n; i++) {
		printf("점수를 입력하세요");
		scanf("%d", &score);
		if (score == -1) break;

		a[i] = score;
	}

	return i;
}

void CalculateHistogram(int a[], int n, int b[])
{
	for (int i = 0; i < n; i++) {
		int star;
		star = a[i] / 10;

		b[star]++;
	}
}

void PrintHistogram(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		if (i == 10) printf("100\t\t| ");
		else printf("%d-%d\t\t| ", i * 10, i * 10 + 9);

		for (int j = 0; j < a[i]; j++) {
			printf("*");
		}
		printf("\n");
	}

}