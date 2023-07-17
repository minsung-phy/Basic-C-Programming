#include <stdio.h>
#include <string.h> // strstr 함수가 선언된 헤더파일

// strstr: 문자열 검색 (찾고자하는 문자열이 있다면 해당 문자열로 시작하는 문자열 포인터를 반환하고 찾고자 하는 문자열이 없다면 NULL값을 반환)

int main()
{
    char str[] = "Hello World Welcome to the World";
    char * ptr = strstr(str, "World"); // World로 시작하는 문자열 검색
    int count = 0;
    
    while (ptr != NULL)
    {
        printf("주소값: %p \n", ptr);
        printf("문자열: %s \n", ptr); // 검색된 문자열 출력
        ptr = strstr(ptr+1, "World"); // 리턴된 포인터 +1 계속 검색
        count++;
    }
    
    printf("찾은 문자열 %d개 \n", count);

    return 0;
}