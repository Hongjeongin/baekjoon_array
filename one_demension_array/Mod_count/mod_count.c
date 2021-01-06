/*
날짜 : 2021-01-04
이름 : 홍정인
제목 : 42로 나눈 나머지
설명 : 10개의 수를 입력받는다. 각 수를 42로 나누었을 때 나머지가 서로 다른 것들의 개수를 출력한다.
*/
#include <stdio.h>

int main(void) {

	int n;
	int count = 10;
	int arr[10];

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d번째 수 입력 : ", i + 1);
		scanf("%d", &n);
		arr[i] = n % 42;
	}

	for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
		if (arr[j] == -1) {
			continue;
		}
		for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
			if (arr[i] == -1 || j == i) {
				continue;
			}
			if (arr[j] == arr[i]) {
				arr[i] = -1;
				count--;
			}
		}
	}

	printf("10개의 수 중 42로 나눈 나머지가 서로 다른 수의 개수는 %d개 입니다.\n", count);

	return 0;
}