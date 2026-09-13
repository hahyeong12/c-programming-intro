/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 18; i++) {
        int num = (i - 1) % 9 + 1;
        int next = (i <= 9) ? 2 : 6;

        for (int dan = next; dan < next + 4; dan++) {
            printf("%d * %d = %2d\t", dan, num, dan * num);
        }
        printf("\n");

        if (i == 9) {
            printf("\n");
        }
    }

    return 0;
}