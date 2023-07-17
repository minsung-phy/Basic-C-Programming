#include <stdio.h>
#include <string.h>

// strcat, strncat 두 함수는 문자열의 뒤에 다른 문자열을 복사하는 기능을 제공한다.

// char * stract(char * dest, const char * src);
// char * strncat(char * dest, const char * src, size_t n); // 자동으로 널 문자를 삽입함
// 덧붙여진 문자열의 주소 값 변환

int main(void)
{
    char str1[20] = "First~";
    char str2[20] = "Second";

    char str3[20] = "Simple num: ";
    char str4[20] = "1234567890";

    /**** case1 ****/
    strcat(str1, str2);
    puts(str1);

    /**** case2 ****/
    strncat(str3, str4, 7);
    puts(str3);
    
    return 0;
}