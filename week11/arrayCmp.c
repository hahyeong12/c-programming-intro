/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int ArrayCmp(int a1[], int a2[], int);

int main(void)
{
	int list1[SIZE] = {11, 22, 33, 44, 55};
	int list2[SIZE] = {11, 22, 33, 44, 50};
	int res;

	res = ArrayCmp(list1, list2, SIZE);

	if (res) printf("두 배열은 같습니다.");
	else printf("두 배열은 다릅니다.");

	return 0;
}

int ArrayCmp(int a1[], int a2[], int n)
{
	for (int i = 0; i < n; i++) {
		if (a1[i] != a2[i]) {
			return 0;
		}
	}
	return 1;
}
