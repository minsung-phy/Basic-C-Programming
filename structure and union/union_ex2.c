#include <stdio.h>

typedef union ubox // 공용체 ubox의 정의
{
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main(void)
{
    UBox ubx; // 8바이트 메모리 할당
    ubx.mem1 = 20;
    printf("%d \n", ubx.mem1);
    printf("%d \n", ubx.mem2);
    printf("%f \n", ubx.mem3);
    printf("\n");

    ubx.mem3 = 7.15;
    printf("%d \n", ubx.mem1);
    printf("%d \n", ubx.mem2);
    printf("%f \n", ubx.mem3);
    /* 실핼결과는 공용체의 멤버들이 메모리 공간을 공유하고 있음을 확인시켜주고 있다. */
    return 0;
}