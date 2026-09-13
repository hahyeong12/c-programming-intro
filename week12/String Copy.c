/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void StringCopy(char dst[], char src[]);

int main(void)
{
	char str1[] = "hi";
	char str2[10];

	StringCopy(str2, str1);

	printf("%s", str2);

	return 0;
}

void StringCopy(char dst[], char src[])
{
	int i;
	for (i = 0; src[i] != 0; i++) {
		dst[i] = src[i];
	}
	dst[i] = '\0';
}
