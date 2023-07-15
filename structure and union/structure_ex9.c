#include <stdio.h>
// typedef 선언: 기존에 존재하는 자료형의 이름에 새 이름을 부여하는 것을 목적으로 하는 선언
typedef int INT; // int의 또 다른 이름 INT를 부여 (자료형의 이름 int에 INT라는 이름을 추가로 붙여주자는 뜻을 컴파일러에게 전달)
typedef int * PTR_INT;

typedef unsigned int UINT;
typedef unsigned int * PTR_UINT;
// unsigned int: 양수만 존재하는 정수(0 ~ 4,294,967,295)
// int: -2,147,483,648 ~ 2,147,483,647

typedef unsigned char UCHAR;
typedef unsigned char * PTR_UCHAR;

int main(void)
{
    INT num1 = 120; // int num1 = 120;
    PTR_INT pnum1 = &num1; // int * pnum1 = &num1;

    UINT num2 = 190; // unsigned int num2 = 190;
    PTR_UINT pnum2 = &num2; // unsigned int * pnum = &num2;

    UCHAR ch = 'Z'; // unsigned char ch = 'Z';
    PTR_UCHAR pch = &ch; // unsigned char * pch = &ch;

    printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
    return 0;
}
