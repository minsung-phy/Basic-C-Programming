#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int * pi; // Pointer Integer
    // malloc: 메모리를 할당해라, malloc(sizeof(int)): int형의 크기만큼 메모리를 할당해라
    pi = (int *) malloc(sizeof(int)); // (int *): 메모리를 할당한곳의 주소를 가르키도록 형 변환을 해줌
    if (pi == NULL)
    {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1);
    }
    *pi = 100;
    printf("%d\n", *pi);
    // 동적 메모리를 사용한 이후에는 무조건 해당 메모리를 반환해야한다.
    free(pi);
    return 0;
}