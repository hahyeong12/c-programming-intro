/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int Delete(int a[], int, int);
void PrintList(int a[], int);

int main(void)
{
	int list[SIZE] = {11, 22, 33, 44, 55};
	int num, res;

	printf("삭제할 요소의 번호는(0~4)?");
	scanf("%d", &num);

	PrintList(list, SIZE);
	res = Delete(list, SIZE, num);
	PrintList(list, res);

}

void PrintList(int a[], int n)
{
	for (int i=0; i < n; i++) {
		printf("%d	", a[i]);
	}
	printf("\n");
}

int Delete(int a[], int s, int p)
{
	for (int i = p; i < s-1; i++) {
		a[i] = a[i + 1];
	}

	return s - 1;
}
