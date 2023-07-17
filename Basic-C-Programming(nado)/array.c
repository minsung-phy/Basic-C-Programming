#include <stdio.h>

int main(void)
{
	// int subway1 = 30; // 지하철 1호차에 30명이 타고 있다
	// int subway2 = 40;
	// int subway3 = 50;
	//
	// printf("지하철 1호차에 %d 명이 타고 있습니다. \n", subway1);
	// printf("지하철 2호차에 %d 명이 타고 있습니다. \n", subway2);
	// printf("지하철 3호차에 %d 명이 타고 있습니다. \n", subway3);

	// 배열: 여러 개의 변수를 함께, 동시에 생성
	// int subway_array[3];
	// subway_array[0] = 30;
	// subway_array[1] = 40;
	// subway_array[2] = 50;

	// for (int i = 0; i < 3; i++)
	// {
	// 	printf("지하철 %d호차에 %d 명이 타고 있습니다. \n", i+1, subway_array[i]);
	// }

	// 값 설정 방법
	// int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// for(int i = 0; i < 10; i++)
	// {
	// 	printf("%d \n", arr[i]);
	// }

	// 값은 초기화를 반드시 해야함
	// int arr[10];
	// for(int i = 0; i < 10; i++)
	// {
	//	printf("%d \n", arr[i]);
	// }

	// 배열 크기는 항상 상수로 선언
	// int size = 10; (int arr[size] 안됨)
	// int arr[10];

	// int arr[10] = {1, 2}; // 3번째 값부터는 자동으로 0으로 초기화 됨
	// for(int i = 0; i < 10; i++)
	// {
	// 	printf("%d \n", arr[i]);
	// }

	// int arr[] = {1, 2}; // arr[2]

	// float arr_f[5] = {1.0f, 2.0f, 3.0f};
	// for(int i = 0; i < 5; i++)
	// {
	// 	printf("%.2f \n", arr_f[i]);
	// }

	// 문자 vs 문자열
	// char c = 'A';
	// printf("%c \n", c);

	// 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야함.
	// char str[7] = "coding"; // [c][o][d][i][n][g][\0]
	// printf("%s \n", str);

	// char str[] = "coding";
	// printf("%s \n", str);
	// printf("%lu \n", sizeof(str));

	// char str[] = "coding";
	// for(int i = 0; i < sizeof(str); i++)
	// {
	// 	printf("%c \n", str[i]);
	// }

	// 영어 1글자: 1 byte
	// 한글 1글자: 2 byte
	// char 크기: 1 byte
	// char kor[] = "이민성";
	// printf("%s \n", kor);
	// printf("%lu \n", sizeof(kor));

	// char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
	// printf("%s \n", c_array);

	// char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g'};

	// printf("%s \n", c_array);

	// for (int i = 0; i < sizeof(c_array); i++)
	// {
	// 	printf("%c \n", c_array[i]);
	// }

	// for (int i = 0; i < sizeof(c_array); i++)
	// {
	// 	printf("%d \n", c_array[i]); // ascii 코드 값 (null 문자는 0으로 입력됨)
	// }

	// // 문자열 입력받기: 경찰서 조서 쓰기 (printfscanf.c) 프로젝트
	// char name[256];
	// printf("이름을 입력하세요: "); scanf("%s", name);
	// printf("%s \n", name);

	// ASCII 코드: ANSI(미국표준협회)에서 제시한 표준 코드 체계
	// 7bit, 총 128개 코드 (0~127)
	// a: 97 (문자 a의 아스키코드 정수값)
	// A: 65
	// 0: 48

	// printf("%c \n", 'a');
	// printf("%d \n", 'a');

	// printf("%c \n", 'b');
	// printf("%d \n", 'b');

	// printf("%c \n", 'A');
	// printf("%d \n", 'A');

	// printf("%c \n", '\0');
	// printf("%d \n", '\0');

	// printf("%c \n", '0');
	// printf("%d \n", '0');

	// printf("%c \n", '1');
	// printf("%d \n", '1');

	// for (int i = 0; i < 128; i++)
	// {
	// 	printf("아스키코드 정수 %d: %c \n", i, i);
	// }
  
	return 0;
}