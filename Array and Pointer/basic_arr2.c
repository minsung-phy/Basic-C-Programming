#include <stdio.h>

int main(void){
    int arr1[5] = {1,2,3,4,5}; // 순차적으로 1,2,3,4,5로 초기화함
    int arr2[ ] = {1,2,3,4,5,6,7}; // 컴파일러에 의해서 자동으로 7이 삽입됨
    int arr3[5] = {1,2}; // 3,4,5번째 배열요소는 0으로 채워짐
    int arr1len, arr2len, arr3len, i;

    printf("배열 arr1의 크기: %d \n", sizeof(arr1));
    printf("배열 arr2의 크기: %d \n", sizeof(arr2));
    printf("배열 arr3의 크기: %d \n", sizeof(arr3));

    arr1len = sizeof(arr1) / sizeof(int); // 배열 arr1의 길이 계산
    arr2len = sizeof(arr2) / sizeof(int); // 배열 arr2의 길이 계산
    arr3len = sizeof(arr3) / sizeof(int); // 배열 arr3의 길이 계산

    for(i=0; i<arr1len; i++)
        printf("%d ", arr1[i]);
    printf("\n");
    for(i=0; i<arr2len; i++)
        printf("%d ", arr2[i]);
    printf("\n");
    for(i=0; i<arr3len; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    return 0;
}