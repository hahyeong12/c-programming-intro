/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int FindIndex(int a[], int, int);

int main(void)
{
	int list[5] = { 11, 22, 33, 22, 44 };
	int index, num;

	printf("찾고자 하는 값은 무엇인가요?");
	scanf("%d", &index);

	num = FindIndex(list, SIZE, index);

	if (num == -1) printf("%d는 목록에 없습니다.", index);
	else printf("%d는 요소 %d에 있습니다.", index, num);

	return 0;
}

int FindIndex(int a[], int n, int s)
{
	for (int i = 0; i < n; i++) {
		if (s == a[i]) {
			return i;
		}
	}
	return -1;
}
