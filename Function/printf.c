#include <stdio.h>

int main(void){
    int num1, num2;
    num1 = printf("12345\n");
    num2 = printf("I love my home\n");
    printf("%d %d \n", num1, num2); 
    // 실행 결과를 보면 알 수 있듯이, \n 문자를 포함하여 문자열의 길이를 반환한다.
    return 0;
}