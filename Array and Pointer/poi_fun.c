#include <stdio.h>

void sap(int * param, int len) // 두 번째 인자로 배열의 길이정보를 전달받도록 정의
{
    int i;
    for(i=0; i<len; i++)
        printf("%d ", param[i]); // int형 포인터 변수의 이름을 대상으로 배열 형태의 접근을 진행하고 있다.
    printf("\n");
}

int main(void)
{
    int arr1[3] = {1, 2, 3};
    int arr2[5] = {4, 5, 6, 7, 8};
    sap(arr1, sizeof(arr1) / sizeof(int)); // 길이가 다른 두 배열을 대상으로 sap함수를 호출하고 있다.
    sap(arr2, sizeof(arr2) / sizeof(int)); // 길이가 다른 두 배열을 대상으로 sap함수를 호출하고 있다.
    return 0;
}