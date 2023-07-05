#include <stdio.h>

int com(int num1, int num2); // 절댓값이 큰 정수 변환
int val(int num); // 전달인자의 절댓값을 반환

int main(void){
    int num1, num2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    printf("%d와 %d중 절댓값이 큰 정수: %d \n", num1, num2, com(num1, num2));
    return 0;
}

int com(int num1, int num2){
    if(val(num1) > val(num2))
        return num1;
    else
        return num2;
}

int val(int num){
    if(num > 0)
        return num;
    else
        return (-1 * num);
}