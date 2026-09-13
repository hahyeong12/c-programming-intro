/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ToUpperString(char s[]);

int main(void)
{
	char str[] = "hi! HEllo How Are you?";

	printf("%s\n", str);
	ToUpperString(str);
	printf("%s\n", str);

	return 0;
}

void ToUpperString(char s[])
{
	int i;
	for (i = 0; s[i] != 0; i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
	}

}