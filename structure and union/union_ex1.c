#include <stdio.h>

typedef struct sbox // 구조체 sbox의 정의
{
    int mem1;
    int mem2;
    double mem3;
} SBox;

typedef union ubox // 공용체 ubox의 정의
{
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main(void)
{
    SBox sbx;
    UBox ubx;
    printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
    printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
    printf("%d %d \n", sizeof(SBox), sizeof(UBox));
    /* 구조체 변수가 선언되면, 구조체를 구성하는 멤버는 각각 할당이 된다. 
    반면 공용체 변수가 선언되면, 공용체를 구성하는 멤버는 각각 할당되지 않고, 그 중 크기가 가장 큰 멤버의 변수만 하나 할당되어 이를 공유하게 된다.*/
    return 0;
}