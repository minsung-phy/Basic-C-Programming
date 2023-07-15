#include <stdio.h>

void swap(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("n1 n2: %d %d \n", n1, n2);
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    printf("num1 num2: %d %d \n", num1, num2);

    swap(num1, num2); // num1과 num2에 저장된 값이 서로 바뀌길 기대
    printf("num1 num2: %d %d \n", num1, num2);
    return 0;
    
    // 17행의 함수호출 결과로 num1과 num2에 저장된 값이 변경되기를 기대하면서 swap 함수를 호출하고 있으며, 그 결과로 num1과 num2에 저장된 값이 매개변수 n1과 n2에 복사된다.
    // 그리고 swap 함수 내에서는 실제로 n1과 n2에 저장된 값의 변경이 일어난다. (이는 출력결과를 통해서 확인 가능)
    // 하지만 이는 매개변수 n1과 n2에 저장된 값을 변경시키는 것일 뿐, num1과 num2에 저장된 값의 변경으로까지 이어지지는 않는다. num1, num2는 n1, n2와 완전히 별개이기 때문이다.
    // 결국 두 매개변수 사이에서만 값의 반환이 일어난 것이다.
}