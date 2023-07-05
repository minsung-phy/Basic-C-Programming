#include <stdio.h>

int num = 1;

int Add(int val){
    int num = 9;
    num += val;
    return num;
}

int main(void){
    int num = 5;
    printf("num: %d \n", Add(3));
    printf("num: %d \n", num+9);
    return 0;
}

// 전역변수와 동일한 이름의 지역변수가 선언된다면 해당 지역 내에서의 전역변수가 가리워지고, 지역변수로의 접근이 이뤄진다.
// 전역변수와 지역변수의 이름은 달리하는 것이 좋다.
// 하지만 전역변수는 프로그램의 구조를 복잡하게 만드는 주범이기 때문에 전역변수의 선언은 가급적 제한해야 한다.