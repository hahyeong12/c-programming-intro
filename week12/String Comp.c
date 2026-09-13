/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int StringComp(char s1[], char s2[]);
void PrintComp(char s1[], char s2[], int n);

int main(void)
{
	int n1, n2, n3;

	char str1[] = "hi";
	char str2[] = "hi!";
	char str3[] = "HI";

	n1 = StringComp(str1, str1);
	n2 = StringComp(str1, str2);
	n3 = StringComp(str1, str3);

	PrintComp(str1, str1, n1);
	PrintComp(str1, str2, n2);
	PrintComp(str1, str3, n3);

	return 0;
}

int StringComp(char s1[], char s2[])
{
	int i;

	for (i = 0; s1[i] != 0 || s2[i] != 0; i++) {
		if (s1[i] != s2[i]) return 1;
	}

	return 0;
}

void PrintComp(char s1[], char s2[], int n)
{
	if (n == 0) printf("%s와 %s는 같은 문자열\n", s1, s2);
	else printf("%s와 %s는 다른 문자열\n", s1, s2);
}
