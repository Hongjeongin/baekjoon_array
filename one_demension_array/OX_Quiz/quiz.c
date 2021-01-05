/*
날짜 : 2021-01-05
이름 : 홍정인
제목 : OX퀴즈
설명 : OX퀴즈의 결과를 입력받고, O의 개수만큼 점수를 더한다. O가 연속되면 더하는 점수가 늘어나고 X가 나오면 연속은 초기화된다.
*/

#include <stdio.h>

int main(void) {

	int n, count, sum;
	char **ox;

	printf("문제는 몇 개 인가요 : ");
	scanf("%d", &n);

	ox = (char**)malloc(sizeof(char*) * n);

	getchar();

	for (int i = 0; i < n; i++) {
		ox[i] = (char*) malloc(sizeof(char) * 80 + 1);
		printf("%d번째 OX 결과를 입력해주세요 : ", i);
		fgets(ox[i], sizeof(char) * 80 + 1, stdin);
	}

	for (int i = 0; i < n; i++) {
		sum = 0; count = 1;
		for (int j = 0; j < strlen(ox[i]); j++) {
			if (ox[i][j] == 'O') {
				sum += count;
				count++;
			}
			else {
				count = 1;
			}
		}
		printf("%d번째 점수 : %d\n", i, sum);
		free(ox[i]);
	}

	free(ox);

	return 0;
}