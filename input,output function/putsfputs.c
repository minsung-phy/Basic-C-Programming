#include <stdio.h>

// int puts(const char * s);
// int fputs(const char * s, FILE * stream);
// 성공 시 음수가 아닌 값을, 실패 시 eof 반환
// puts 함수가 호출되면 문자열 출력 후 자동으로 개행이 이뤄지지만, fputs 함수가 호출되면 문자열 출력 후 자동으로 개행이 이뤄지지 않는다.

int main(void)
{
    char * str = "Simple String";

    printf("1. puts test ---- \n");
    puts(str);
    puts("So Simple String");

    printf("2. fputs test ---- \n");
    fputs(str, stdout); printf("\n");
    fputs("So Simple String", stdout); printf("\n");

    printf("3. end of main ---- \n");

    return 0;
}