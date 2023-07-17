#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     char str1[]=”My String”; 
//     char str2[]=”My String”; 
//     if(str1==str2)
//         puts(“equal”); 
//     else
//         puts(“not equal”); 
    
//     return 0;
// }

// 위의 코드에서는 str1 과 str2 를 비교하고 있다. 
// 그런데 이는 문자열의 내용을 비교하는 것이 아니라 배열 str1 과 배열 str2 의 주소 값을 비교하는 것이다. 
// 배열의 이름은 배열의 주소 값을 의미하므로 이는 배열의 주소 값 비교로 이어지고, 
// 때문에 위 예제의 실행결과로는 결코 문자열 equal 가 출력되지 않는다. 
// 따라서 문자열의 내용을 비교하고자 한다면, 다음의 함수를 별도로 호출해야 한다.

// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n); // 세번째 인자로 전달된 수의 크기만큼만 문자를 비교
// 두 문자열의 내용이 같으면 0, 같지 않으면 0이 아닌 값 반환

// s1 이 더 크면 0 보다 큰 값 반환
// s2 가 더 크면 0 보다 작은 값 반환
// s1 과 s2 의 내용이 모두 같으면 0 반환
// 문자열의 크고 작음은 아스키 코드 값을 기준으로 결정됨. -> 별로 중요하지 않음. 0이냐 0이 아니냐의 사실이 더 중요함.

int main(void)
{
    char str1[20];
    char str2[20];
    printf("문자열 입력 1: "); scanf("%s", str1);
    printf("문자열 입력 2: "); scanf("%s", str2);

    if(!strcmp(str1, str2))
        puts("두 문자열은 완벽히 동일합니다.");
    else
    {
        puts("두 문자열은 동일하지 않습니다.");
        if(!strncmp(str1, str2, 3))
            puts("그러나 앞 세 글자는 동일합니다.");
    }
    return 0;
}