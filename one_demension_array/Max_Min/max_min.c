/*
날짜 : 2021-01-02
이름 : 홍정인
제목 : 최소,최댓값
설명 : n개의 정수를 입력 받고 최솟값과 최댓값을 출력하는 프로그램이다.
*/

#include <stdio.h>

int main(void) {

	int n;
	int min, max;
	int *arr;

	printf("정수 개수를 입력해주세요 : ");
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		printf("%d번째 정수 입력 : ", i + 1);
		scanf("%d", &arr[i]);
	}

	min = arr[0];
	max = arr[0];

	for (int i = 0; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("최솟값 : %d || 최댓값 : %d\n", min, max);
	free(arr);

	return 0;
}