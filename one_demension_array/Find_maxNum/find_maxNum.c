/*
날짜 : 2020-01-02
이름 : 홍정인
제목 : 최대값은 어디있나?
설명 : 9개의 서로 다른 자연수를 입력받는다. 그 중 최댓값을 찾고, 몇 번째 자연수인지 출력한다.
*/

#include <stdio.h>

int main(void) {

	int num;
	int maxNum = 0;
	int count = 0;

	printf("---9개의 서로 다른 자연수를 입력해주세요---\n");
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);

		if (num > maxNum) {
			maxNum = num;
			count = i + 1;
		}
	}

	printf("최댓값은 %d이고 %d번째에 있습니다.\n", maxNum, count);

	return 0;
}