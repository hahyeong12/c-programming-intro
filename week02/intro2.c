#include <stdio.h>

void MyInfo(void);
void Drawline(void);


int main(void)
{
	MyInfo();

	printf("\n\n안녕하십니까? 저는 kim이라고 합니다.\n\n");

	MyInfo();

	return 0;
}

void MyInfo(void)
{
	Drawline();
	printf("컴퓨터공학과  kim\n");
	Drawline();
}

void Drawline(void)
{
	printf("----------------------------------------\n");
}