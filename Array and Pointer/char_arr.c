#include <stdio.h>

int main(void){
    char str[] = "Good morning!"; // 눈에 보이는 배열의 길이는 13이지만 실제 배열의 길이는 특수문자 \n(문자열의 끝에 자동으로 삽입됨) 때문에 14이다.
    // 따라서 문자열의 저장을 목적으로 char형 배열을 선언할 경우에는 특수문자 \n이 저장될 공간까지 고려해서 배열의 길이를 결정해야한다.
    printf("배열 str의 크기: %d \n", sizeof(str));
    printf("널 문자 문자형 출력: %c \n", str[13]);
    printf("널 문자 정수형 출력: %d \n", str[13]);
    // 널 문자(\n)의 아스키 코드 값은 0이며, 이를 문자의 형태로 출력할 경우, 아무런 출력이 발생하지 않는다.

    str[12]='?'; // 배열 str에 저장된 문자열 데이터는 변경 가능
    printf("문자열 출력: %s \n", str);
    return 0;
}