#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned)time(NULL));
    printf("\n\n === 아빠는 대머리 게임 === \n\n");
    int answer; // 사용자 입력값
    int treatment = rand() % 4; // 발모제(정답) 선택 (0~3)

    // 사용자에게 발모제 투여 과정을 3번 보여줌
    for (int i = 1; i <= 3; i++)
    {
        int bottle[4] = {0, 0, 0, 0}; // 4개의 병
        
        int isIncluded = 0; // 보여줄 병 중에 발모제가 포함되었는지 여부
        printf(" >> %d번째 시도: ", i);

        // 보여줄 병 종류를 선택
        for (int j = 0; j < 2; j++)
        {
            int randBottle = rand() % 4; // (0~3)

            // 아직 선택되지 않은 병이면, 선택 처리
            if (bottle[randBottle] == 0)
            {
                bottle[randBottle] = 1;
                if(randBottle == treatment)
                    isIncluded = 1;
            }
            // 이미 선택된 병이면, 중복이므로 다시 선택
            else
                j--;
        }

        for (int k = 0; k < 4; k++)
        {
            if (bottle[k] == 1)
                printf("%d ", k+1);
        }
        printf("물약을 머리에 바릅니다 \n\n");

        if (isIncluded == 1)
            printf(" >> 성공! 머리가 났어요! \n");
        else
            printf(" >> 실패! 머리가 나지 않았어요! \n");
        printf("\n 계속 하려면 엔터키를 누르세요");
        getchar();     
    }

    printf("\n\n 발모제는 몇번일까? \n\n"); scanf("%d", &answer);
    if (answer == treatment+1)
        printf("\n >> 정답입니다! \n");
    else
        printf("\n >> 틀렸습니다. 정답은 %d입니다. \n", treatment+1);
    return 0;
}