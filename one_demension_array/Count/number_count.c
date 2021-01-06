/*
날짜 : 2021-01-04
이름 : 홍정인
제목 : 0~9 카운트
설명 : 세자리 자연수를 입력받아 곱한다. 곱한 값에서 0~9가 몇 번 나왔는지 각각 출력한다.
*/

#include <stdio.h>

int main(void) {

	int n1, n2, n3;
	int mul;
	int count[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	printf("첫 번째 수 입력 : ");
	scanf("%d", &n1);
	printf("두 번째 수 입력 : ");
	scanf("%d", &n2);
	printf("세 번째 수 입력 : ");
	scanf("%d", &n3);

	mul = n1 * n2 * n3;
	printf("세 수를 곱한 값 : %d\n", mul);

	while (mul != 0) {
		count[mul % 10]++;
		mul /= 10;
	}

	for (int i = 0; i < sizeof(count) / sizeof(int); i++) {
		printf("%d은 %d번 나왔습니다.\n", i, count[i]);
	}

	return 0;
}