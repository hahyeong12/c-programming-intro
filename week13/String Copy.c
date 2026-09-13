/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* StringCopy(char* src);

int main(void)
{
    char* dst = StringCopy("Hello");
    printf("복사된 문자열: %s\n", dst);
    free(dst);
    
	return 0;
}

char* StringCopy(char* src) {
    int len = strlen(src) + 1;

    char* dst = (char*)malloc(len);
    if (dst == NULL) {
        printf("오류 : 메모리 부족!");
        exit(1);
    }

    strcpy(dst, src);

    return dst;
}