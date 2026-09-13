/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int StringLength(char s[]);

int main(void)
{
	char str[] = "hi";
	int n;

	n = StringLength(str);
	printf("문자열의 길이는 %d입니다.", n);

	return 0;
}

int StringLength(char s[])
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;

	return i;
}
