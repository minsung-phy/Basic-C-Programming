#include <stdio.h>

int main_printfscanf(void)
{
	// 정수형 변수에 대한 예제
	/* int age = 12;
	printf("나이: %d \n", age);
	age = 13;
	printf("나이: %d \n", age); */

	// 실수형 변수에 대한 예제
	/* float f = 46.5f; // float 방식에서는 숫자 뒤에 항상 f를 붙인다.
	printf("%.2f \n", f); // %f: 실수형
	printf("%.2f \n", f); // %.2f: 소수점 둘째 자리 수까지 출력
	double d = 4.428;
	printf("%lf \n", d); // %lf: 실수형
	printf("%.2lf \n", d); // %.2lf: 소수점 둘째 자리 수까지 출력 */

	// 상수
	/* const int YEAR = 2003;
	printf("태어난 년도: %d \n", YEAR);
	// YEAR = 2004; // 오류 발생 */

	// printf (연산)
	/* int add = 3 + 7; // 10
	printf("3 + 7 = %d \n", add);
	printf("%d + %d = %d \n", 30, 79, 30 + 79);
	printf("%d x %d = %d \n", 30, 79, 30 * 79); */

	// scanf: 키보드 입력을 받아서 저장
	/* int input;
	printf("값을 입력하세요 : "); scanf_s("%d", &input);
	printf("입력값: %d \n", input); */

	/* int one, two, three;
	printf("3개의 정수를 입력하세요: "); scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값: %d \n", one);
	printf("두번째 값: %d \n", two);
	printf("세번째 값: %d \n", three); */

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/* char c = 'A';
	printf("%c \n", c); */

	/* char str[256];
	scanf_s("%s", str, sizeof(str));
	// scanf("%s", str);
	printf("%s \n", str); */

	// 프로젝트 - 조서 작성
	
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("이름이 뭐에요? "); scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요? "); scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 이에요? "); scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm 이에요? "); scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? "); scanf_s("%s", what, sizeof(what));

	// 조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름  : %s \n", name);
	printf("나이  : %d \n", age);
	printf("몸무게: %.2f \n", weight);
	printf("키    : %.2lf \n", height);
	printf("범죄명: %s \n", what);

	return 0;
}