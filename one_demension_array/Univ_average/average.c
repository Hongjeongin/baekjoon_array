/*
��¥ : 2021-01-06
�̸� : ȫ����
���� : �б� �л����� �ݺ� ��� ����
���� : ���� ������ �Է¹ް� �� ���� �л� ���� �Է¹޴´�. �л����� ������ �Է¹��� ��, ������ ����� �Ѵ� �л��� ���� �ݸ��� ���Ѵ�.
*/

#include <stdio.h>

int main(void) {

	int n, s_count, count = 0, sum = 0;
	int **score;
	double avg, percent;

	printf("���� �� ���ΰ��� : ");
	scanf("%d", &n);
	score = (int**)malloc(sizeof(int*) * n);

	for (int i = 0; i < n; i++) {
		printf("%d���� �л��� ����ΰ��� : ", i + 1);
		scanf("%d", &s_count);
		score[i] = (int*)malloc(sizeof(int) * (s_count + 1));
		score[i][0] = s_count;
		for (int j = 1; j <= s_count; j++) {
			printf("%d��° �л��� ���� : ", j);
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
		printf("%d���� ����� �Ѵ� �л����� ������ %.3lf%%�Դϴ�.\n", i + 1, percent);
		free(score[i]);
		sum = 0;
		count = 0;
	}

	free(score);

	return 0;
}