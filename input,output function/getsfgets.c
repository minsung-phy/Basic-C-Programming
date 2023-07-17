#include <stdio.h>

// char * gets(char * s);
// char * fgets(char * s, int n, FILE * stream);
// 파일의 끝에 도달하거나 함수 호출 실패 시 null 포인터 변환

int main(void)
{
    char str[7];
    int i;

    for (i = 0; i < 3; i++)
    {
        fgets(str, sizeof(str), stdin);
        printf("Read %d: %s \n", i+1, str);
    }
    return 0;
}