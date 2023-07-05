#include <stdio.h>

int main(void){
    int num;
    printf("1이상 5이하의 정수 입력: ");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("1은 one \n");
            break;
        case 2:
            printf("2는 two \n");
            break;
        case 3:
            printf("3은 three \n");
            break;
        case 4:
            printf("4는 four \n");
            break;
        case 5:
            printf("5는 five \n");
            break;
        default:
            printf("1이상 5이하의 정수를 입력하시오. \n");
    }

    return 0;
}