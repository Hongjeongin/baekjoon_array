/*
날짜 : 2021-01-05
이름 : 홍정인
제목 : 과목 점수 재수정
설명 : 과목 점수 중 최고점을 구하고, 그를 이용하여 과목 점수를 수정하는 프로그램
*/

#include <stdio.h>

int main(void) {

	int s_count, score, maxNum = -1;
	int *arr;
	double sum = 0.0;

	printf("과목이 몇 개 입니까 : ");
	scanf("%d", &s_count);

	arr = (int*)malloc(sizeof(int) * s_count);

	for (int i = 0; i < s_count; i++) {
		printf("%d번째 과목 점수를 입력해주세요 : ", i + 1);
		scanf("%d", &arr[i]);

		if (maxNum < arr[i]) {
			maxNum = arr[i];
		}
	}
	for (int i = 0; i < s_count; i++) {
		sum += (arr[i] / (maxNum * 1.0)) * 100;
	}

	printf("새 평균은 %lf입니다.\n", sum / s_count);
	free(arr);

	return 0;
}