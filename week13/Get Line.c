/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* GetLine(void);

int main()
{
    printf("문자열을 입력하세요: ");
    char* msg = GetLine();

    if (msg == NULL) printf("입력이 없습니다.\n");
    else {
        printf("입력된 문자열: %s\n", msg);
        free(msg);
    }

    return 0;
}

char* GetLine(void)
{
    char temp[1000] = {0};
    char dummy;

    scanf("%[^\n]", temp);
    scanf("%c", &dummy);

    if (temp[0] == '\0') return NULL;


    char* str = (char*)malloc(strlen(temp) + 1);
    if (str == NULL) return NULL;

    strcpy(str, temp);

    return str;
}