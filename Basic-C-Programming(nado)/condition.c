#include <stdio.h>
#include <time.h>

int main_condition(void)
{
	//  버스를 탄다고 가정, 학생 or 일반인으로 구분 (일반인: 20세이상)
	// if(조건) {...} else {...}
	/*int age = 25;
	if (age >= 20)
		printf("일반인 입니다. \n");
	else
		printf("학생입니다. \n");
	return 0;*/

	// 초등학생(8~13) or 중학생(14~16) or 고등학생(17~19)
	// if | elseif | else
	/*int age = 25;
	if (age >= 8 && age <= 13) 
		printf("초등학생 입니다. \n");
	else if (age >= 14 && age <= 16)
		printf("중학생 입니다. \n");
	else if (age >= 17 && age <= 19)
		printf("고등학생 입니다. \n");
	else
		printf("학생이 아닙니다. \n");*/

	// break & continue
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	/*int i;
	for (i = 1; i <= 30; i++) 
	{
		if (i >= 6)
		{ 
			printf("나머지 학생은 집에 가세요. \n");
			break;
		}
		printf("%d번 학생은 조별 발표 준비를 하세요 \n", i);
	}*/

	// 1번부터 30번까지 있는 반에서 7번 학생은 결석함
	// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.
	/*int i;
	for (i = 1; i <= 30; i++) 
	{
		if (i >= 6 && i <= 10) 
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다. \n", i);
				continue;
			}
			printf("%d번 학생은 조별 발표 준비를 하세요 \n", i);
		}
	}*/

	// &&: and 
	// ||: or
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
		printf("a와 b 혹은 c와 d의 값이 같습니다. \n");
	else
		printf("값이 서로 다릅니다. \n");*/

	// 가위 바위 보 게임
	// 가위 0 바위 1 보 2
	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 반환
	//if (i == 0)
	//	printf("가위 \n");
	//else if (i == 1)
	//	printf("바위 \n");
	//else if (i == 2)
	//	printf("보 \n");
	//else
	//	printf("오류 발생 \n");

	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 반환
	//switch (i)
	//{
	//case 0: printf("가위 \n"); break;
	//case 1: printf("바위 \n"); break;
	//case 2: printf("보 \n"); break;
	//default: printf("오류 발생 \n"); break;
	//}

	/*int age = 15;
	switch (age)
	{
	case 8: 
	case 9: 
	case 10: 
	case 11: 
	case 12: 
	case 13: printf("초등학생 입니다. \n"); break;
	case 14: 
	case 15:
	case 16: printf("중학생 입니다. \n"); break;
	case 17: 
	case 18: 
	case 19: printf("고등학생 입니다. \n"); break;
	default: printf("학생이 아닙니다. \n"); break;
	}*/

	// 프로젝트: Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 사이의 숫자
	printf("숫자: %d \n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (1) // 1: 참, 0: 거짓
	{
		printf("남은 기회 %d번 \n", chance--);
		printf("숫자를 맞혀보세요 (1~100): "); scanf_s("%d", &answer);

		if (answer > num)
			printf("Down ↓ \n\n");
		else if (answer < num)
			printf("Up ↑ \n\n");
		else if (answer == num)
		{
			printf("정답입니다! \n\n");
			break;
		}
		else
			printf("오류가 발생했습니다. \n");

		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨습니다. 아쉽게 실패하셨습니다. \n");
			break;
		}
	}
	return 0;
}