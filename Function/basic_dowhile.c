#include <stdio.h>

int main(void){
    // do~while문은 반복영역이 무조건 한 번 이상 실행되어야 할 때 사용
    int total=0, num=0;
    do{
        printf("정수 입력(0 to quit): ");
        scanf("%d", &num);
        total += num;
    } while(num!=0);
    printf("합계: %d \n", total);
    return 0;
}