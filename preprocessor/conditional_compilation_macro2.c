#include <stdio.h>
// #define ADD 1
#define MIN 0

int main(void)
{
    int num1, num2;
    printf("두 개의 정수 입력: "); scanf("%d %d", &num1, &num2);

#ifdef ADD // 매크로 ADD가 정의되었다면
    printf("%d + %d = %d \n", num1, num2, num1+num2);
#endif

#ifdef MIN // 매크로 MIN이 정의되었다면
    printf("%d - %d = %d \n", num1, num2, num1-num2);
#endif

    return 0;
}

// #ifndef...#endif: 매크로가 정의되지 않았다면
// 사이에 있는 n이 not을 의미한다. 이 매크로는 헤더파일의 중복포함을 막기위해 주로 사용된다.