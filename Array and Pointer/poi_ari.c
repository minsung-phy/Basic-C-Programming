#include <stdio.h>

int main(void)
{
    int * ptr1 = 0x0010;
    double * ptr2 = 0x0010;

    printf("%p %p \n", ptr1 + 1, ptr1 + 2); // 4가 증가하고, 8이 증가한다.
    printf("%p %p \n", ptr2 + 1, ptr2 + 2); // 8이 증가하고, 16이 증가한다.

    printf("%p %p \n", ptr1, ptr2);
    ptr1++; // 4가 증가한다.
    ptr2++; // 8이 증가한다.
    printf("%p %p \n", ptr1, ptr2);
    return 0;
    // type형 포인터를 대상으로 n의 크기만큼 값을 증가 및 감소 시, n x sizeof(type)의 크기만큼 주소 값이 증가 및 감소한다.
}