/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputPositiveData(int);
void distinction(int);


int main(void)
{
    int age;

    printf("나이를 입력하세요. ");
    scanf("%d", &age);

    age = InputPositiveData(age);

    distinction(age);

    return 0;
}

int InputPositiveData(int age)
{
    while (age<=0 || age>=120){

        printf("나이를 입력하세요. ");
        scanf("%d", &age);
    }


    return age;
}

void distinction(int age)
{
    if (age >= 20) printf("성인입니다. \n");
    else printf("미성년입니다. \n");
}