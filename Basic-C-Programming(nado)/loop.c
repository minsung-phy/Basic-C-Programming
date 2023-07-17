#include <stdio.h>

int main_loop(void)
{
	// ++
	/*int a = 10;
	printf("a는 %d \n", a);
	a++;
	printf("a는 %d \n", a);
	a++;
	printf("a는 %d \n", a);*/

	/*int b = 20;
	printf("b는 %d \n", ++b);
	printf("b는 %d \n", b++);
	printf("b는 %d \n", b);*/
	
	//int i = 1;
	//printf("Hello World %d \n", i++); // 1
	//printf("Hello World %d \n", i++); // 2
	//printf("Hello World %d \n", i++); // 3
	//printf("Hello World %d \n", i++); // 4
	//printf("Hello World %d \n", i++); // 5
	//printf("Hello World %d \n", i++); // 6
	//printf("Hello World %d \n", i++); // 7
	//printf("Hello World %d \n", i++); // 8
	//printf("Hello World %d \n", i++); // 9
	//printf("Hello World %d \n", i++); // 10

	// 반복문
	// for, while, do while
	
	// for (선언; 조건; 증감) { }
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World! %d \n", i);
	}*/

	// while (조건) { }
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d \n", i++);
	}*/

	// do { } while (조건);
	/*int i = 1;
	do {
		printf("Hello World %d \n", i++);
	} while (i <= 10);*/

	// 2중 반복문
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문: %d \n", i);
		for (int j = 1; j <= 5; j++)
		{
			printf("	두 번째 반복문: %d \n", j);
		}
	}*/

	// 구구단
	/*int i, j;
	for (i = 2; i <= 9; i++)
	{
		printf("--- %d단 --- \n", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}*/

	
	// *
	// **
	// ***
	// ****
	// *****
	/*int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//     *
	//    **
	//   ***
	//  ****
	// *****
	// 나의 답
	/*int i, j, k;
	for (i = 5; i > 0; i--)
	{
		for (j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (k = 5; k >= i; k--)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// 해설
	/*int i, j, k;
	for (int i = 0; i < 5; i++)
	{
		for (j = i; j < 5-1; j++)
		{
			printf(" ");
		}
		for (k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	// 프로젝트 - 피라미드를 쌓아라 
	//     *
	//    ***
	//   *****
	//  *******
	// *********
	int floor;
	int i, j, k;
	printf("몇 층으로 쌓겠느냐? "); scanf_s("%d", &floor);
	for (i = 0; i < floor; i++)
	{
		for (j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (k = 0; k < i*2+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}