#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(void)
{
    struct point pos = {10, 20};
    struct person man = {"이승기", "010-1234-5678", 21}; // 초기화 과정에서는 strcpy 함수를 호출할 필요 없이 멤버에 저장할 데이터를 단순히 나열만 하면 된다.
    printf("%d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %d \n", man.name, man.phoneNum, man.age);
    return 0;
}