#include <stdio.h>

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(void)
{
    struct person arr[3] = {
        {"이민성", "010-1111-1111", 21}, // 첫 번째 요소의 초기화
        {"뉴턴", "010-2222-2222", 21}, // 두 번째 요소의 초기화
        {"페러데이", "010-3333-3333", 21} // 세 번째 요소의 초기화
    };

    int i;
    for(i=0; i<3; i++)
        printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
        
    return 0;
}