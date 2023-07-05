#include <stdio.h>

int local(void){
    int num=10; // 이후부터 local의 num 유효
    num++;
    printf("local의 num: %d \n", num);
    return 0; // local의 num1이 유효한 마지막 문장
}

int local2(void){
    int num1=20; // 이후부터 local2의 num1 유효
    int num2=30; // 이후부터 local2의 num2 유효
    num1++, num2--;
    printf("local2의 num1 & num2: %d %d \n", num1, num2);
    return 0; // local2의 num1, num2이 유효한 마지막 문장
}

int main(void){
    int num=17; // 이후부터 main의 num 유효
    local();
    local2();
    printf("main의 num: %d \n", num);
    return 0; // main의 num이 유효한 마지막 문장
}