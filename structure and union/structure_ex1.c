#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(void)
{
    struct person man1, man2;
    strcpy(man1.name, "이민성"); // name과 phoneNum이 배열이기 때문에 문자열 저장을 위해서는 strcpy 함수를 호출해야 한다.
    strcpy(man1.phoneNum, "010-1234-5678");
    man1.age = 21;

    printf("이름 입력: "); scanf("%s", man2.name);
    printf("번호 입력: "); scanf("%s", man2.phoneNum);
    printf("나이 입력: "); scanf("%d", &(man2.age));

    printf("이름: %s \n", man1.name);
    printf("번호: %s \n", man1.phoneNum);
    printf("나이: %d \n", man1.age);

    printf("이름: %s \n", man2.name);
    printf("번호: %s \n", man2.phoneNum);
    printf("나이: %d \n", man2.age);
    return 0;
}