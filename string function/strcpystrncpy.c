#include <stdio.h>
#include <string.h>

// char * strcpy(char * dest, const char * src);
// char * strncpy(char * dest, const char * src, size_t n); // 널 문자를 삽입해줘야함
// 복사된 문자열의 주소 값 변환

int main(void)
{
    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];

    /**** case1 ****/
    strcpy(str2, str1);
    puts(str2);

    /**** case2 ****/
    strncpy(str3, str1, sizeof(str3));
    puts(str3);

    /**** case2 ****/
    strncpy(str3, str1, sizeof(str3)-1);
    str3[sizeof(str3) - 1] = 0;
    puts(str3);

    return 0;
}