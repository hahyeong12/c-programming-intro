/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define size 10

int main(void)
{
	int list[size] = { 21, 123,4,77,80,56,12,77,65,90 };
	int key, found;

	printf("key값을 입력하세요.");
	scanf("%d", &key);

	for (int i = 0; i < size; i++) {
		if (key == list[i]) {
			found = i;
			break;
		} 
		else found = 15;

	}

	if (found != 15){
		printf("key값이 존재합니다.\n");
		printf("인덱스 %d에 존재.", found);
	}
	else printf("key값이 존재하지 않습니다.\n");

	

	return 0;
}