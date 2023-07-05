#include <stdio.h>

// int Add(int num1, int num2) 반환형태 함수이름(입력형태) 
// (int num1, int num2)는 매개변수의 선언이다. 이는 함수호출 시 전달되는 인자를 저장할 변수의 선언이다.

int Add(int num1, int num2){ // 인자전달(O), 반환 값(O)
    return num1+num2; // 반환
}

void ShowAddResult(int num){ // 인자전달(O), 반환 값(X)
    printf("덧셈결과 출력: %d \n", num);
}

int Readnum(void){ // 인자전달(X), 반환 값(O)
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUseThisProgram(void){ // 인자전달(X), 반환 값(X)
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
    printf("자, 그럼 2개의 정수를 입력하세요. \n");
} 

int main(void){
    int result, num1, num2;
    HowToUseThisProgram();
    num1 = Readnum();
    num2 = Readnum();
    result = Add(num1, num2);
    ShowAddResult(result);
    return 0;
}