/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void StringConcat(char s1[], char s2[]);

int main(void)
{
	char str2[30] = "hi";

	printf("%s\n", str2);
	StringConcat(str2, "hello");
	printf("%s\n", str2);

	return 0;
}

void StringConcat(char s1[], char s2[])
{
	int i, j;
	for (i = 0; s1[i] != 0; i++)
		;
	for (j = 0; s2[j] != 0; j++,i++) {
		s1[i] = s2[j];
	}

	s1[i] = '\0';
}