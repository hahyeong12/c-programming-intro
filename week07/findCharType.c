/*컴퓨터공학과  kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int FindCharType(char);

int main(void)
{
	int input;
	char ch;

	printf("문자를 입력하세요.");
	scanf("%c", &ch);
	input = FindCharType(ch);

	printf("입력된 문자는 ");
		if (input == 1) printf("스페이스 문자");
		else if (input == 2) printf("탭문자");
		else if (input == 3) printf("개행 문자");
		else if (input == 4) printf("알파벳 및 숫자 문자");
		else printf("일반 문자");
	printf("입니다.");
}

int FindCharType(char ch)
{

	if (ch == ' ') return 1;
	else if (ch == '\t') return 2;
	else if (ch == '\n') return 3;
	else if ((ch >= 'a' && ch <= 'z') ||
			(ch >= 'A' && ch <= 'Z') ||
			(ch >= '0' && ch <= '9')) return 4;
	else return 0;
}