#include <stdio.h>
#define STRING_JOB(A, B) #A "의 직업은 " #B "입니다."

int main(void)
{
    printf("%s \n", STRING_JOB(이민성, 개발자));
    printf("%s \n", STRING_JOB(이규현, 연구원));
}