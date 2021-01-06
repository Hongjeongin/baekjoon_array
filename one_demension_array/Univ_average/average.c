/*
날짜 : 2021-01-06
이름 : 홍정인
제목 : 학교 학생들의 반별 평균 비율
설명 : 반의 개수를 입력받고 각 반의 학생 수를 입력받는다. 학생들의 점수를 입력받은 후, 점수가 평균을 넘는 학생의 수를 반마다 구한다.
*/

#include <stdio.h>

int main(void) {

	int n, s_count, count = 0, sum = 0;
	int **score;
	double avg, percent;

	printf("반이 몇 개인가요 : ");
	scanf("%d", &n);
	score = (int**)malloc(sizeof(int*) * n);

	for (int i = 0; i < n; i++) {
		printf("%d반의 학생은 몇명인가요 : ", i + 1);
		scanf("%d", &s_count);
		score[i] = (int*)malloc(sizeof(int) * (s_count + 1));
		score[i][0] = s_count;
		for (int j = 1; j <= s_count; j++) {
			printf("%d번째 학생의 점수 : ", j);
			scanf("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= score[i][0]; j++) {
			sum += score[i][j];
		}
		avg = (sum * 1.0) / score[i][0];
		for (int j = 1; j <= score[i][0]; j++) {
			if (score[i][j] > avg) {
				count++;
			}
		}
		percent = ((count * 1.0) / score[i][0]) * 100;
		printf("%d반의 평균을 넘는 학생들의 비율은 %.3lf%%입니다.\n", i + 1, percent);
		free(score[i]);
		sum = 0;
		count = 0;
	}

	free(score);

	return 0;
}