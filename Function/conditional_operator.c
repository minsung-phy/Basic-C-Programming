#include <stdio.h>

int main(void){
    int num, abs;
    printf("정수 입력: ");
    scanf("%d", &num);

    abs = num>0 ? num : num*(-1); // 삼항 연산자 (conditional operator) : (조건) ? data1 : data2; (조건이 참이면 data1 반환, 거짓이면 data2 반환)
    printf("절댓값: %d \n", abs);
    return 0;
}