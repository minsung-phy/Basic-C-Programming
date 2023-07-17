#include <stdio.h>
#include <string.h>

// size_t strlen(const shar * s);
// 전달된 문자열의 길이를 반환하되, 널 문자의 길이에 포함하지 않는다.

// 위 함수의 반환형 size_t는 일반적으로 다음과 같이 선언되어 있다.
// typedef unsigned int size_t
// typedef 선언으로 인해서 size_t가 unsigned int를 대신할 수 있게 되었다. 
// 즉, 위의 typedef 선언으로 인해서 size_t가 unsigned int를 대신할 수 있게 된 것이다. 
// 따라서 다음 두 선언은 완전히 동일하다.
// size_t len;
// unsigned int len;

// 그럼 이어서 strlen 함수의 호출방법을 보이겠다.
// int main(void)
// {
//     char str[]=”1234567”;
//     printf(“%u \n”, strlen(str)); // 문자열의 길이 7 이 출력된다. 
//     ....
// }

// strlen 함수의 반환형은 size_t이니, 이 함수의 반환 값을 unsigned int형 변수에 저장하고 서식문자 %u로 출력하는 것이 정확하다.
// 그러나 문자열이 아무리 길어도 문자열의 길이정보는 int형 변수에 저장이 가능하기 때문에,
// strlen 함수의 반환 값을 int형 변수에 저장하고 서식문자 %d로 출력한다.

// 아래 예제에서는 다음 요구사항에 대한 해결책을 제시한다.
// fgets 함수 호출을 통해서 문자열을 입력 받고 싶은데, 같이 딸려서 들어오는 \n 문자는 문자열에서 제외시키고 싶다.

void remove_enter(char str[])
{
    int len = strlen(str);
    str[len-1] = 0;
}

int main(void)
{
    char str[100];
    printf("문자열 입력: "); 
    fgets(str, sizeof(str), stdin);
    printf("길이: %d, 내용: %s \n", strlen(str), str);

    remove_enter(str);
    printf("길이: %d, 내용: %s \n", strlen(str), str);

    return 0;
}