#include <stdio.h>
#include <time.h>

int main_random(void)
{
	//srand(time(NULL)); // 난수 초기화
	//int num = rand() % 3; // 0 ~ 2 
	//int num2 = rand() % 3 + 1; // 1 ~ 3 
	//printf("%d \n", num);
	//printf("%d \n", num2);

	int i;
	printf("난수 초기화 이전 \n");
	for (i = 0; i < 10; i++)
		printf("%d ", rand() % 10);

	srand(time(NULL));
	printf("\n\n난수 초기화 이후 \n");
	for (i = 0; i < 10; i++)
		printf("%d ", rand() % 10);

	return 0; 
}