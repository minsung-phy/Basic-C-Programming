#include <stdio.h>

void recursive(int num){
    if(num<=0) // 재귀의 탈출조건
        return; // 재귀의 탈출
    printf("Recursive call %d \n", num);
    recursive(num-1);
}

int main(void){
    recursive(3);
    return 0;
}

// 재귀함수를 정의하는데 있어서 탈출조건을 구성하는 것은 매우 중요한 일이다.
