#include <stdio.h>

int number(int num1, int num2); 
// 절차지향이기 때문에 main 함수 이전에 number 함수가 나와야하지만 위의 문장으로 뒤에 number 함수가 나온다고 알려줌.
int main(void){
    printf("3과 4중에서 큰 수는 %d이다. \n", number(3,4));
    printf("7과 2중에서 큰 수는 %d이다. \n", number(7,2));
    return 0;
}

int number(int num1, int num2){
    if(num1>num2)
        return num1;
    else
        return num2;
}