#include <stdio.h>

int main(void){
    int total=0;
    int i, num;

    printf("0부터 num까지의 덧셈을 출력합니다. num을 입력하세요 : ");
    scanf("%d", &num);

    for(i=0; i<num+1; i++)
        total+=i;

    printf("0부터 %d까지의 덧셈결과 : %d \n", num, total);  
    return 0;
}